#include "npc.h"
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ, TK_NUM,TK_LEFT_Para, TK_RIGHT_Para, TK_HEX, TK_REG, TK_OR, TK_AND, TK_NOTEQ, DEREF

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"==", TK_EQ},      // equal
  {"\\-", '-'},        // sub
  {"\\*", '*'},        // mul
  {"\\/", '/'},        // div
  {"\\(", TK_LEFT_Para},        
  {"\\)", TK_RIGHT_Para},  
  {"0[xX][0-9a-fA-F]+",TK_HEX},  // hex     
  {"[0-9]+",TK_NUM},  
  {"\\$[\\$0-9a-zA-Z]+",TK_REG},
  {"\\|\\|", TK_OR},              // or
  {"&&", TK_AND},                 // and 
  {"!=", TK_NOTEQ},               // not equal
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[64] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;
  
  while (e[position] != '\0') {
    /* Try all rules one by one. */
    
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
      
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;
	/*
        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);*/
        position += substr_len;
        
        
        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */   
        if ((rules[i].token_type != TK_NOTYPE) && (rules[i].token_type != TK_NUM) && (rules[i].token_type != TK_REG) && (rules[i].token_type != TK_HEX)){          
          tokens[nr_token].type = rules[i].token_type;
          nr_token++;
          }
        if (((rules[i].token_type == TK_NUM) || (rules[i].token_type == TK_REG) || (rules[i].token_type == TK_HEX))&& (substr_len <=32)){
          strncpy(tokens[nr_token].str,substr_start, substr_len);
           tokens[nr_token].str[substr_len] = '\0'; 
          tokens[nr_token].type = rules[i].token_type;
          nr_token++;
           //printf("tokens is %s\n",tokens[j].str);
          }
        if (substr_len >32){
          printf("The string is too long");
          }
           
                  
         
        /*switch (rules[i].token_type) {
          default: TODO();
        }
        */
        break;
        
      }
    }
    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

int bad_expression;
static bool check_parentheses(int p,int q){
  int i,j,k,l,m;
  j =0; k = 0;l =0;bad_expression =0;m =0;
    if((tokens[p].type != TK_LEFT_Para) || (tokens[q].type != TK_RIGHT_Para)){
    printf("the whole expression is not surrounded by a matched pair of parentheses\n");
    return false;   
    }
    else if ((tokens[p].type == TK_LEFT_Para) && (tokens[q].type == TK_RIGHT_Para)){
        for(i = p; i< q-1; i++){
            if(tokens[i+1].type == TK_LEFT_Para) 
            j++;            
            else if (tokens[i+1].type == TK_RIGHT_Para)
            k++;
            
            if((k >0) && (j==0)){
            l = 1;
            } 
            
            if ((k-j)>=2)
            m =1;
        }
        if ((j != k) || m==1){
        printf("bad expression\n");
        bad_expression =1;
        return false;
        }
        
        else if ((j == k ) && (l == 1)){
        printf("the leftmost '(' and the rightmost ')' are not matched\n");
        return false;
        }
    } 
  return true;
}
static unsigned int expr_pri(int type) {
   if ((type == '+')||(type == '-'))
     return 4;
   else if (type == 0)
     return 6;
   else if ((type == TK_EQ) || (type == TK_NOTEQ))
     return 3;
   else if (type == TK_AND)
     return 2;
   else if (type == TK_OR)
     return 1;
   else
     return 5;
}


static unsigned int expr_dom_op(int p,int q) {
   int i;int Para_Flag;int op;int op_type;
   int num_para;//括号数
   Para_Flag = 0;op_type = 0;op = 0;num_para = 0;
   for (i = p ; i< q ;i++){
     if (tokens[i].type == TK_LEFT_Para){
       Para_Flag = 1; 
       num_para++;
       continue;
     }
     else if (tokens[i].type == TK_RIGHT_Para){
       Para_Flag = 0;
       num_para--;
       continue;
     }
     else if (((tokens[i].type == '+') || (tokens[i].type == '-') || (tokens[i].type == '*') || (tokens[i].type == '/') || (tokens[i].type == TK_EQ) || (tokens[i].type == TK_NOTEQ) || (tokens[i].type == TK_OR) || (tokens[i].type == TK_AND))&&Para_Flag == 0 && num_para == 0){
       if ((expr_pri(tokens[i].type) <= expr_pri(op_type))){
         op_type = tokens[i].type;
         op = i;        
       }
     }    
   }
  // printf("op_ is %d\n",op);
   return op;
}

static  int expr_dom_type(int p,int q) {
   int i;int Para_Flag;int op_type;
   int num_para;//括号数
   Para_Flag = 0;op_type = 0;num_para = 0;
   for (i = p ; i< q ;i++){
     if (tokens[i].type == TK_LEFT_Para){
       Para_Flag = 1;
       num_para++;
       continue;
     }
     else if (tokens[i].type == TK_RIGHT_Para){
       Para_Flag = 0;
       num_para--;
       continue;
     }
     else if (((tokens[i].type == '+') || (tokens[i].type == '-') || (tokens[i].type == '*') || (tokens[i].type == '/') || (tokens[i].type == TK_EQ) || (tokens[i].type == TK_NOTEQ) || (tokens[i].type == TK_OR) || (tokens[i].type == TK_AND))&&Para_Flag == 0 && num_para == 0){
       if ((expr_pri(tokens[i].type) <= expr_pri(op_type))){
         op_type = tokens[i].type;
        // printf("op_type is %c\n",op_type);
       }
     }    
   }
   return op_type;
}

static unsigned int eval(int p,int q) {
  int op_type;
  unsigned int n;
  unsigned int val1;
  unsigned int val2;
  unsigned int op;
  if (p > q) {
   printf("Bad expression");
  //printf("%d\n",nr_token);
   return 0;
  }
  else if (p == q) {
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */ 
     if ((tokens[p].type == TK_HEX)  || (tokens[p].type == TK_REG))
     sscanf(tokens[p].str,"%x",&n); 
     else
     sscanf(tokens[p].str,"%d",&n); 
     
     return n;
  }
  else if (tokens[p].type == DEREF){
     sscanf(tokens[p].str,"%x",&n); 
     return n;  
  }
  
  else if (check_parentheses(p, q) == true) {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    return eval(p + 1, q - 1);
  }
  else if (bad_expression == 0){
    op = expr_dom_op(p,q);
    op_type = expr_dom_type(p,q);
    val1 = eval(p, op - 1);
    val2 = eval(op + 1, q);
         switch (op_type) {
            case '+': return val1 + val2;break;
            case '-': return val1 - val2;break;
            case '*': return val1 * val2;break;
            case '/': {
              if (val2 != 0){
                return val1 / val2;
              break;
              }
              else{
              Log("%s",ANSI_FMT("***********The dividend cannot be 0***********", ANSI_FG_RED));
              assert(val2 !=0);
              return 0;
              break;
              }
            }
            
            case TK_EQ:{
             if (val1 == val2){             
             printf("The EXPR IS EQ\n");
             return 1;
             break;
             }
             else{            
             printf("The EXPR IS NOT EQ\n");
             return 0;
             break;
             }
            }
            
            case TK_NOTEQ:{
             if (val1 != val2){            
             printf("The EXPR IS NOT EQ\n");
             return 1;
             break;
             }
             else{             
             printf("The EXPR IS EQ\n");
             return 0;
             break;
             }
            }            
            case TK_AND:return (val1 && val2);break;
            case TK_OR:return (val1 || val2);break;           
              default: assert(0);
         }
       
  }    
  else if (bad_expression == 1){
       printf("                 *********The expression is bad, plese check it out********\n");
       assert(0);
      return 0;
    }
  return 0;
}

void reg_expr(){
	//word_t temp;
	for (int i =0;i < nr_token;i++){
		if (tokens[i].type == TK_REG){
		
		printf("The value of the reg is 0x%016lx\n",isa_reg_str2val(tokens[i].str + 1));

		sprintf(tokens[i].str, "%lx", isa_reg_str2val(tokens[i].str + 1));		
		}
	}
}

void deref_expr(){
    for (int i =0;i < nr_token;i++){
	if (tokens[i].type == '*' && (i == 0 || (tokens[i - 1].type != TK_NUM && tokens[i - 1].type != TK_HEX && tokens[i - 1].type != TK_REG && tokens[i - 1].type !=')'))) {
	  char *str;
	  long long *data;
	  data =(long long*)malloc(sizeof(long long));
	  //unsigned int mem;
	  word_t addr;
          tokens[i].type = DEREF;          
          addr = strtol(tokens[i+1].str,&str,16);
          pmem_read(addr,data);
          sprintf(tokens[i].str,"%x",*(unsigned int *)data); 
         // printf("0x%02x\n" , mem & 0xff);
         //break;  
       }
    }
}




word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  /* TODO: Insert codes to evaluate the expression. */  
  else {
    *success = true;
    //printf("%d\n",nr_token);
	reg_expr();
	deref_expr();
    return eval(0,nr_token-1);   
   }
}
