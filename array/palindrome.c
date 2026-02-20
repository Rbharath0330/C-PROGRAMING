#include <stdio.h>
int main(){
int a=121;
int rem;
int sum=0;
int copy=a;
while (a>0)
{

    rem=a%10;
    sum=sum*10+rem;
     a/=10;
}
if (copy==sum){
printf("is a palindrome");
}
else{
printf("is not a palindrome");
}
return 0;
}
