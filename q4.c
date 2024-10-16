#include<stdio.h>
int main(){
int n=12345;
int result=fun(n);
printf("result is %d",result);
return 0;
}
int fun(int n){
if(n/10==0)
	return 0;
return (1+fun(n/10));
}
