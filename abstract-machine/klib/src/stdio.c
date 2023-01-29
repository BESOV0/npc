#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#include <string.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

static unsigned long m_pow(int x,int y){
	unsigned long sum = 1;
      while(y--){
      sum *= x;
      }
      return sum;
}

static void m_str(char* str,char ch){
	char b[2] = {};
	b[0] = ch;
	b[1] = '\0';
	strcat(str,b);
}

static void m_strr(char* str,const char *ch){
	char b[2] = {};
	b[0] = *ch;
	b[1] = '\0';
	strcat(str,b);
}


////////////////////////////////////////////////////////////////////////////////////////////

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *str, ...) {
	va_list ap;
	int val,r_val;
	char count,ch;
	const char *s = NULL;
	int res = 0;
	strcpy(out,"");
	va_start(ap,str);
     while('\0' != *str)
     {       
          switch(*str){
            case '\n':
             m_str(out,'\n');
               res += 1;
               break;
             case '\r':
               m_str(out,'\r');
               res += 1;
               break;
             case '%':{
              str++;
               switch(*str){
                   case 'd': 
                        val = va_arg(ap, int); 
 			r_val = val;
                        count = 0;
                        while(r_val)
                        { 
                             count++;
                             r_val /= 10;
			} 
			res += count;
                        r_val = val;
                        while(count)
                        { 
                              ch = r_val / m_pow(10,count - 1);
                              r_val %= m_pow(10,count - 1);
                              m_str(out,ch + '0');
                              count--;
                        }
                        break;
                   case 's':         
                      s = va_arg(ap,const char *);
                      count = strlen(s);
                      while(count){
                      m_strr(out,s);
                      count--;
                      s++;
                      }
                      res += strlen(s);
                      break;
                      
                default:
                break;
                }
                break;
             }
          default:   
		m_strr(out,str);
                res += 1;
               break;
	}
         str++;
     }
     va_end(ap);
     return res;
	//panic("Not implemented");
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
