#include <stdio.h>
int main(){
int a,b;
char  op;

printf("Enter a operator +,-,*,/:");
scanf("%c",&op);

printf("Enter a two number");
scanf("%d %d",&a,&b);

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
     printf("anser=%d",a/b);
break;

}
return 0;
}
