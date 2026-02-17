#include <stdio.h>
enum menu{
add,
sub,
mul,
div,
};
int main(){
int choice;
int a,b;
printf("enter a choice, (0,1,2,3)");
scanf("%d",&choice);
switch (choice){

case add:
    printf("enter a two number");
    scanf("%d %d",&a ,&b);
    printf("%d",a+b);
break;

case sub:
    printf("enter a two number");
    scanf("%d %d",&a,&b);
    printf("%d",a-b);
break;

case mul:
     printf("enter a two number");
     scanf("%d %d",&a,&b);
     printf("%d",a*b);
break;

case div:
     printf("enter a two number");
     scanf("%d %d",&a,&b);
     printf("%d",a/b);
break;

defalut:
      printf("invalid choice\n");
}

return 0;
}
