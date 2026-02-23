#include <stdio.h>
void increment(int*ptr)
{
(*ptr)++;
}
int main(){
int num=30;
increment(&num);
printf("increment value:%d\n",num);
return 0;
}
