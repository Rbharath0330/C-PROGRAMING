#include<stdio.h>
void reverse(int*num)
{
int n=*num;
int rev=0;

while(n!=0)
{
rev=rev*10+(n%10);
n=n/10;
}
*num=rev;
}
int main(){
int number;
printf("enter a number");
scanf("%d",&number);

reverse(&number);
printf("reverse number=%d",number);
return 0;
}
