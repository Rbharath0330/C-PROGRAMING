#include <stdio.h>
int main(){
int x= 34;
int *p;
p=&x;

printf("value of x=%d\n",x);
printf("adress of x=%p\n",&x);
printf("value of p=%p\n",p);
printf("value at adress in p(*p)=%d\n",*p);
return 0;
}
