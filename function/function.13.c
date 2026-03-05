#include <stdio.h>
int palandirome(int number){
 int palan=0;
while(number!=0)
{
     palan=palan*10 + (number%10);
     number=number/10;
}
return palan;
}
int main(){
int number,result;
printf("enter a number");
scanf("%d",&number);

result=palandirome(number);
if(result==number)
{
printf("it is palendirome");
}
else{
printf("its not palandirome");
}
return 0;
}
