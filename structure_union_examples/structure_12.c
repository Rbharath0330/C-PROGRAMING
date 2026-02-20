#include <stdio.h>
 typedef struct{
char name[20];
int auno;
float bal;
}bank;

 void deposit(bank*bharath,float amount){
bharath->bal+=amount;}
void widhraw(bank*bharath,float amount){
bharath->bal-=amount;}
int main(){

bank bharath;
float amount;
printf("enter name");
scanf("%s",bharath.name);

printf("enter auno");
scanf("%d",&bharath.auno);

printf("enter bal");
scanf("%f",&bharath.bal);

printf("deposit amount");
scanf("%f",&amount);

deposit(&bharath,amount);

printf("%f",bharath.bal);

return 0;
}
