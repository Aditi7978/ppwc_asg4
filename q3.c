#include<stdio.h>
int main(){
int n=5;
int result=sumOfN(5);
printf("sum of n numbers when n=5 is %d",result);
return 0;
}
int sumOfN(int n){
if(n==0)
	return 0;
return (n+sumOfN(n-1));
}
