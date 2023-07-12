
#include "npc.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  char str[64];
  struct watchpoint *next;

  /* TODO: Add more members if necessary */

} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL, *head_d = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */
WP* new_wp(char *str){
	WP* temp;
	WP* q = NULL;
	if(free_ == NULL)
	init_wp_pool();
	temp = free_;
	if(temp == NULL)
	   assert(0);
	else{
	   free_ = temp->next;
	   if(head == NULL){
	      head = temp;
	      head_d = temp;
	      strcpy(head_d->str,str);
	      //printf("the expr is %s\n",head_d->str);	
	      head_d->next = NULL;
	      return head_d;
	   }
	   else{
	      q = temp;
	      strcpy(q->str,str);
              q->next = NULL;
              head_d->next = q;
              head_d = q;
              return head_d;
	   }   
	}
}


void new_wps(char *str){

   new_wp(str);

}

void free_wp(WP *wp){

	if((*wp).NO < (*free_).NO){
	   wp->next = free_;
	   free_=wp;
	   strcpy(wp->str,"");
	}
	else{
	   wp->next = free_->next;
	   free_->next = wp;
	   strcpy(wp->str,""); 
	}
}

void LIST_DEL(int num){
	WP* temp = head;
	WP* templ = NULL;
	WP* tempk = NULL;
	if (head == NULL){
	printf("No Watchpoints Yet\n");
	assert(0);
	}
	while(temp != NULL){
		if(((*head).NO) == num){
		    tempk = head->next;		    
		    free_wp(head);
		    head = tempk;
		    return;
		   // break;
		}
		else if((*temp).NO == num){
		    tempk = temp->next;		    
		    free_wp(temp);
		    templ->next = tempk;
		    return;
		   // break;
		}
		templ = temp;
		temp = temp->next;
	}
	printf("No such a Watchpoint\n");
}

int wp_info(){
           WP* temp = head;
        if(temp == NULL){
           printf("No Watchpoints Yet!!!!\n");
           return 0;
        }
	while(temp != NULL){	
	   printf("The watchpoint's number is %d and the expr is %s\n",(*temp).NO,temp->str);	
	   temp = temp->next;
	}
	return 0;
}


char *old_str[NR_WP]={};
char *new_str[NR_WP]={};

void str_init(){

 for(int i=0;i<NR_WP;i++)
	   {
	      old_str[i]= (char *)malloc(sizeof(char)*64);
	      new_str[i]= (char *)malloc(sizeof(char)*64);
           } 

}

unsigned long int old_val[NR_WP] = {};
int flag = 0;
bool watchpoints_expr(){	
	WP* temp = head;
	word_t new_val[NR_WP] = {};	
	int change_flag = 0;
	bool success = true;	
	if(temp == NULL){
	//printf("NULL\n");
	   flag = 0;          
           return true;
        }
        if(flag == 1){
	while(temp != NULL){
	   //printf("0\n");
	   new_val[(*temp).NO] = expr(temp->str,&success);
	   //printf("1\n");
	   strcpy(new_str[(*temp).NO],temp->str);
	   //printf("2\n");	   
	   temp = temp->next;
	   //printf("3\n");
	}
	temp = head;
	}
	else{
	while(temp != NULL){
	   str_init();
	  // printf("0\n");
	   new_val[(*temp).NO] = expr(temp->str,&success);
	  // printf("1\n");
	   strcpy(new_str[(*temp).NO],temp->str);
	  // printf("2\n");
	   old_val[(*temp).NO] = new_val[(*temp).NO];
	  // printf("3\n");
	   old_str[(*temp).NO] = new_str[(*temp).NO];
	   temp = temp->next;
	   flag = 1;
	}
	   temp = head;	
	}
	while(temp != NULL){
	   if((new_val[(*temp).NO] != old_val[(*temp).NO]) && (strcmp(old_str[(*temp).NO],new_str[(*temp).NO]) == 0)){
	   Log("new_val is 0x%08lx  old_val is 0x%08lx",new_val[(*temp).NO],old_val[(*temp).NO]);
	   change_flag = 1;
	   }
	   old_val[(*temp).NO] = new_val[(*temp).NO];
	   old_str[(*temp).NO] = new_str[(*temp).NO];
	   temp = temp->next;
	}
	
	if (change_flag == 1)
	return false;
	else
	return true;
}






