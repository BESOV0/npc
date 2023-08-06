#include <unistd.h>
#include <stdio.h>
#include <sys/time.h>
#include <NDL.h>

/*
int main(){
	struct timeval tv_begin,tv_end;
	int count = 1;
	//int i = 0x7fffffff;
	gettimeofday(&tv_begin,NULL);
        while(1){
        	gettimeofday(&tv_end,NULL);
        	long long int sec = (tv_end.tv_sec - tv_begin.tv_sec);
        	//long long int usec = (tv_end.tv_usec - tv_begin.tv_usec) / 1000;
        	//printf("%lld\n",usec);
        	if(sec == count){
        		printf("hello from timer-test count: %d\n",count);
        		count+=1;
        	}
	}
	return 0;
}
*/

int main(){
	
	int time1 = NDL_GetTicks();
	int time2 = 0;
	int count = 500;
	while(1){
        	int time2 = NDL_GetTicks();
        	int time = time2 - time1;
        	if(time == count){
        		printf("hello from timer-test count: %d\n",count);
        		count+=500;
        	}
	}
	return 0;
}
