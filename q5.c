#include<stdio.h>
int main(){
int n=457;
int result=fun(n);
printf("result is %d",result);
return 0;
}
int fun(int n){
if(n/10==0)
	return n;
return ((n%10) +fun(n/10));
}
