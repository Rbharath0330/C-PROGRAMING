#include <stdio.h>
int factorial(int n){
int i=1;
int fact=1;
for(i=1;i<=n;i++){
fact=fact*i;
}
return fact;
}
int main(){

int num;

printf("enter a number");
scanf("%d",&num);

printf("factorial number=%d",factorial(num));

return 0;
}
