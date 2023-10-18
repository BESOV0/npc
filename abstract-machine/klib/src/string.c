#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
//#if defined(__NATIVE_USE_KLIB__)


size_t strlen(const char *s) {
	assert(s);
	size_t count = 0;
	while (*s++ != 0)
	{
		count++;
	}
	return count;
	//panic("Not implemented");
}

char *strcpy(char *dst, const char *src) {
	assert( (dst != NULL) && (src != NULL));
	char *address = dst;
	while((*dst++ = *src++) != '\0');
	return address;
	//panic("Not implemented");
}

char *strncpy(char *dst, const char *src, size_t n) {
	assert( (dst != NULL) && (src != NULL));
	char *address = dst;
	while ( n-- && (*dst++ = *src++) != '\0');
	return address;
	//panic("Not implemented");
}

char *strcat(char *dest, const char *src) {
	if (dest == NULL || src == NULL){
		return dest;
	}
	char* p = dest;			
	while (*p != '\0'){		
		p++;
	}
	while (*src != '\0'){			
		*p = *src;
		p++;			
		src++;
	}
	*p = '\0';
	return dest;
	//panic("Not implemented");
}

int strcmp(const char *s1, const char *s2) {
	assert(s1 && s2);
	int ret=0;
	while( !(ret = *(unsigned char*)s1 - *(unsigned char*)s2 ) && *s1 )
	{
		s1++;
		s2++;
	}
	if(ret < 0)
        return -1;
	else if(ret > 0) 
	return 1;
	return 0;
	//panic("Not implemented");
}

int strncmp(const char *s1, const char *s2, size_t n) {
	assert(s1 && s2);
	if(!n)
	return 0;
	while(--n && *s1 && (*s1 == *s2))
	{
        	s1++;
        	s2++;
	} 
	return *s1 - *s2;
	//panic("Not implemented");
}

void *memset(void *dest, int c, size_t n) {
    assert(dest!=NULL);
    char *pDest=(char *)dest;
    while(n--!=0)
    {
        *pDest++=c;
    }
    return dest;
  //panic("Not implemented");
}

void *memmove(void *dest, const void *src, size_t n) {
	char* pdest = (char *)dest;
	const char* psrc = (const char *)src;
	assert(dest);
	assert(src);
	if (pdest <= psrc&&pdest >= psrc + n)
	{
		while (n--)
		{
			*pdest = *psrc;
		}
	}
	else
	{
		while (n--)
		{
			*(pdest + n) = *(psrc + n);
		}
	}
	return dest;
	//panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
	if (NULL == out || NULL == in || n < 0)
		return NULL;
	char *tempDest = (char *)out;
	char *tempSrc = (char *)in; 
	while (n-- > 0)
		*tempDest++ = *tempSrc++;
	return out;	
	//panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {
 	if (!n)
	return(0);
	while ( --n && *(char *)s1 == *(char *)s2)
	{
		s1 = (char *)s1 + 1;
		s2 = (char *)s2 + 1;
	}
	return( *((unsigned char *)s1) - *((unsigned char *)s2) );
	//panic("Not implemented");
}

#endif
