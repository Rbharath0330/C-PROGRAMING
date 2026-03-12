
#include<stdio.h>
#include"calc.h"
int main(){
int a;
int b;
char op;
printf("enter a operators +,-,*,/ :");
scanf(" %c",&op);

printf("enter a number\n");
scanf("%d%d",&a,&b);

calculator(a,b,op);
return 0;
}
