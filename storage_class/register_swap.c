#include<stdio.h>
int main(){
register int a=10,b=20;
register int temp;
printf("before swap:a=%d b=%d\n",a,b);
temp = a;
a = b;
b = temp;
printf("after swap:a=%d b=%d:",a,b);
return 0;
}
