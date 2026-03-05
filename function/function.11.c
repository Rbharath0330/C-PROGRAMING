#include <stdio.h>
int sumofdigit(int num){
int sum=0;
while(num!=0){
sum=sum+(num%10);
num=num/10;
}
return sum;
}
int main(){
int num,result;
printf("enter a number");
scanf("%d",&num);
result=sumofdigit(num);
printf("sumofdigit=%d",result);

return 0;
}
