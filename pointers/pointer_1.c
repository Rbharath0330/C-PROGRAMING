#include <stdio.h>

int main(){
int num=10;
int *ptr;
ptr=&num;
printf("value of num=%d\n",num);
printf("adress of num=%p\n",&num);
printf("pointer ptr adress=%p\n",ptr);

return 0;
}
