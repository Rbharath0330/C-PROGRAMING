#include <stdio.h>

void sub(){
printf("subb=%d",a);
}

void fun(){
sub();
}
int main(){
fun();
printf("%d",a);
return 0;
}
static int a=10;
static int b=20;
