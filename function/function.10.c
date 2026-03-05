#include <stdio.h>
int prime(int n){
int i=2;
if(n<=i){
return 0;
}
for(i=2;i<n;i++)
{
if(n%i==0)
{
return 0;
}
}
return 1;
}
int main(){
int num;

printf("enter a number");
scanf("%d",&num);

if(prime(num)){
printf("prime number\n:");
}
else{
printf(" not a prime number\n:");
}
return 0;
}
