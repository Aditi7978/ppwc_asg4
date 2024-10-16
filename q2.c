#include<stdio.h>
int main(){
printf("enter a number:");
int n;
scanf("%d",&n);
float ans=fact(1)/1 +fact(2)/2 +fact(3)/3 +fact(4)/4 +fact(5)/5;
printf("required ans is %f",ans);

return 0;}
int fact(int n){
if(n==1 || n==0)
	return 1;
	return n*fact(n-1);
}
