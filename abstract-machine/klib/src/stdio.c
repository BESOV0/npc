#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#include <string.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

static unsigned long m_pow_n(int m,int n){
	unsigned long sum = 1;
      while(n--){
      sum *= m;
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
int printf(const char* fmt, ...)
{
    if (fmt == NULL) 
    return -1;

    unsigned int ret_num = 0;
    
    char* pStr = (char*)fmt;
    int ArgIntVal = 0;
    unsigned long ArgHexVal = 0;
    char* ArgStrVal = NULL;
    
    unsigned long val_seg = 0;
    int cnt = 0;
    
    va_list pArgs;
    va_start(pArgs, fmt);
    while (*pStr != '\0')
    {
        switch (*pStr)
        {
        case ' ':
            putch(*pStr); ret_num++;    break;
        case '\t':
            putch(*pStr); ret_num += 4; break;
        case '\r':
            putch(*pStr); ret_num++;    break;
        case '\n':
            putch(*pStr); ret_num++;    break;
        case '%':
            pStr++;
            switch (*pStr)
            {
            case '%':
                putch('%');
                ret_num++;
                pStr++;
				continue;
            case 'c':
                ArgIntVal = va_arg(pArgs, int);
                putch((char)ArgIntVal);
                ret_num++;
                pStr++;
				continue;
            case 'd':
                ArgIntVal = va_arg(pArgs, int);
                if (ArgIntVal < 0)//negative
                {
                    ArgIntVal = -ArgIntVal;
                    putch('-');
                    ret_num++;
                }
                val_seg = ArgIntVal;
                
                if (ArgIntVal != 0)
                {
                    while (val_seg > 0) {
                        cnt++;
                        val_seg /= 10;
                    }
                }
                else cnt = 1;

                ret_num += cnt;
                while (cnt > 0)
                {
                    val_seg = ArgIntVal / m_pow_n(10, cnt - 1);
                    ArgIntVal %= m_pow_n(10, cnt - 1);
                    putch((char)val_seg + '0');
                    cnt--;
                }
                pStr++;
                continue;
      
            case 'x':

                ArgHexVal = va_arg(pArgs, unsigned long);
                val_seg = ArgHexVal;

                if (ArgHexVal)
                {
                    while (val_seg) {
                        cnt++;
                        val_seg /= 16;
                    }
                }
                else cnt = 1;

                ret_num += cnt;
                while (cnt)
                {
                    val_seg = ArgHexVal / m_pow_n(16, cnt - 1);
                    ArgHexVal %= m_pow_n(16, cnt - 1);
                    if (val_seg <= 9)
                        putch((char)val_seg + '0');
                    else
                    {
			//my_send_char((char)val_seg - 10 + 'a');
                        putch((char)val_seg - 10 + 'A');
                    }
                    cnt--;
                }
                pStr++;
				continue;
       
            case 's':

                ArgStrVal = va_arg(pArgs, char*);
                ret_num += (unsigned int)strlen(ArgStrVal);
                while (*ArgStrVal)
                {
                    putch(*ArgStrVal);
                    ArgStrVal++;
                }

                pStr++;
				continue;
            default:
				putch(' '); ret_num++;
				continue;
            }


        default:
            putch(*pStr); ret_num++;
            break;
        }
        pStr++;
    }
    va_end(pArgs);

    return ret_num;
}


int vsprintf(char *out, const char *fmt, va_list ap) {
	return vsnprintf(out, -1, fmt, ap);
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
                              ch = r_val / m_pow_n(10,count - 1);
                              r_val %= m_pow_n(10,count - 1);
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
  	va_list ap;
  	va_start(ap, fmt);
  	int length = vsnprintf(out, n, fmt, ap);
  	va_end(ap);
  	return length;
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
	int pos = 0;
  	for (; *fmt != '\0'; fmt++) {
    		while (*fmt != '%' && *fmt != '\0') {
      			out[pos++] = *fmt++;
      			if (pos > n) {
        			return -1;
      			}
    		}
    		
    		if (*fmt == '%') {
      			fmt++;
    		}
    		else if (*fmt == '\0') {
      			break;
    		}
    		char padding = ' ';
    		if (*fmt == '0') {
      			padding = '0';
      			fmt++;
    		}
    		
    		int width = 0;
    		while (*fmt >= '0' && *fmt <= '9') {
     			width = width * 10 + *fmt++ - '0';
    		}

    		switch (*fmt) {
      			case 's': {
        			char *s = va_arg(ap, char *);
        			while (*s != '\0') {
          				out[pos++] = *s++;
          				if (pos > n) {
            					return -1;
          				}
        			}
        			break;
      			}
      			case 'd': {
        			int d = va_arg(ap, int);
        			if (d < 0) {
            				d = -d;
            				out[pos++] = '-';
            				if (pos > n) {
              					return -1;
            				}
        			}
        			char num[20] = {0};
        			int rem = 0;
        			int length = 0;
        			do {
          				rem = d % 10;
          				d = d / 10;
          				num[length++] = rem + '0';
        			} while (d > 0);

        			while (length < width) {
          				out[pos++] = padding;
          				width--;
          				if (pos > n) {
            					return -1;
          				}
        			}

        			length--;
        			for (; length >= 0; length--) {
          				out[pos++] = num[length];
          				if (pos > n) {
              					return -1;
          				}
        			}
        			break;
      			}
      			case 'p':
      			case 'x': {
          			uint64_t d = va_arg(ap, uint64_t);
          			char num[20] = {0};
          			int rem = 0;
          			int length = 0;

          			do {
            				rem = d % 16;
            				d = d / 16;
            				if (rem <= 9) {
              					num[length++] = rem + '0';
            				}
            				else {
              					num[length++] = rem - 10 + 'a';
            				}
          			} while (d > 0);

          			while (length < width) {
            				out[pos++] = padding;
            				width--;
            				if (pos > n) {
              					return -1;
            				}
          			}

          			out[pos++] = '0';
          			if (pos > n) {
            				return -1;
          			}

          			out[pos++] = 'x';
          			if (pos > n) {
            				return -1;
          			}

          			length--;
          			for (; length >= 0; length--) {
            				out[pos++] = num[length];
            				if (pos > n) {
              					return -1;
            				}
          			}
          			break;
        		}
      		}
    	}

  	if (pos > n) {
    		return -1;
  	}

  	out[pos] = '\0';
  	return pos;	
}

#endif
