#include <stdio.h>
int main(){
int num;
int *ptr;
ptr=&num;
*ptr=77;

printf("value of num=%d\n",num);
printf("value of pointer=%d\n",*ptr);
return 0;
}
