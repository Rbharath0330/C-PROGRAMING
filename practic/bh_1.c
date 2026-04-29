#include <stdio.h>
int main(){
int a;
int count=0;
printf("enter a number A:\n");
scanf("%d",&a);

while(a!=0)
{
if(a&1)
{
count++;
}
a=a>>1;
}
printf("numbers of 1's in A=%d\n",count);

return 0;
}
