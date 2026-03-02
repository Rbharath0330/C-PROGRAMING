#include <stdio.h>
int square(int a){
return a*a;
}

int main(){
int a,b;
printf("enter a number");
scanf("%d",&a);
b=square(a);

printf("square of number:%d",b);
return 0;
}

