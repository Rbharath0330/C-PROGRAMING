#include <stdio.h>
int reversenumber(int num){
int reverse=0;
while(num!=0){
int digit=num%10;
    reverse=reverse*10+digit;
    num=num/10;
}

return reverse;
}

int main(){
int num,result;
printf("enter a number");
scanf("%d",&num);
result=reversenumber(num);
printf("reverse number is=%d",result);

return 0;
}
