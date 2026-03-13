#include<stdio.h>
#include "fibino.h"

void function(int a)
{
int first=0;
int second=1;
int i=0;
int ans;
printf("%d %d",first,second);

for(i=2;i<a;i++)
{
ans=first+second;
printf(" %d",ans);

first=second;
second=ans;
}
printf("\n");
}
