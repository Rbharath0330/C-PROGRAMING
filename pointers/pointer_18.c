#include <stdio.h>

int main(){

int arr[]={40,50,60};
int *p=arr;

printf("intial value:%d\n",*p);

p++;
printf("after p++:%d\n",*p);

p=arr;

(*p)++;
printf("after (*p)++:%d\n",*p);

return 0;
}
