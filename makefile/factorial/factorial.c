#include "factorial.h"
unsigned int factorial(unsigned int n)
{
int fact=1,i;
for(i=1;i<=n;i++){
fact *=i ;
}
return fact;
}
