#include <stdio.h>
 void calculate(int a,int b,int*sum,int *diff)
{
*sum=a+b;
*diff=a-b;
}

int main(){
int x=30,y=70;
int s,d;
calculate(x,y,&s,&d);
printf("sum=%d\n",s);
printf("differecwe=%d\n",d);
return 0;
}
