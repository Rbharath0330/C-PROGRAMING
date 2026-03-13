#include <stdio.h>
#include "prime.h"

int main(){
int n;

printf("enter a number");
scanf("%d",&n);

if(prime(n))
   printf("prime number\n");
else
   printf("not a prime number");
return 0;
}



