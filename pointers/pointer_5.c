#include <stdio.h>
void modify(int *p)
{
*p=*p=20;
}
int main(){
 int num =7;
printf("before modiofy:%d\n",num);
modify(&num);
printf("after modify:%d\n",num);
return 0;
}
