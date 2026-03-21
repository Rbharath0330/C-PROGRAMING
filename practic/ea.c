#include<stdio.h>
int main(){
int a;
printf("enter a number");
scanf("%d",&a);
for(int i=2;i<a;i++){
if(a%i==0){
printf("not prime \n");
return 0;
}
}
printf("prime number");
return 0;
}
