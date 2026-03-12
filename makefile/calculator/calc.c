
#include<stdio.h>
#include"calc.h"

void calculator(int a,int b,char op)
{
switch (op){
case '+':
      printf("answer=%d",a+b);
break;

case '-':
      printf("answer=%d",a-b);
break;

case '*':
     printf("answer=%d",a*b);
break;
case '/':
     printf("answer=%d",a/b);
break;


}
}

