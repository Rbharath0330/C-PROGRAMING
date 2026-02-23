#include <stdio.h>
void calculate(int a,int b, int *quotient,int *remainder)
{
*quotient=a/b;
*remainder=a%b;
}
int main(){
int num1,num2;
int q,r;

printf("enter a two number");
scanf("%d %d",&num1,&num2);

calculate(num1,num2,&q,&r);

printf("quotient:%d\n",q);
printf("remainder:%d\n",r);

return 0;
}
