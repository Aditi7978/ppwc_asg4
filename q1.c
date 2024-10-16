#include<stdio.h>
int main(void){
printf("enter a number");
int n;
scanf("%d",&n);
int ans=squareNum(n);
printf("Square is %d :",ans);
return 0;
}
int squareNum(int n){
return n*n;
}
