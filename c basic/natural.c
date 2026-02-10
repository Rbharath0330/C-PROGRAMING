#include <stdio.h>
int main(){

int i;
int a;
int sum =0;
printf("enter a value");
scanf("%d",&a);
for(i=1;i<=a;i++)
{

sum=sum+i;
}
printf("%d",sum);
return 0;
}

