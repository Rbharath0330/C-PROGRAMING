#include <stdio.h>
#include <math.h>
#include "mathh.h"

void library(int a,int b){

int result;

result= sqrt(a);
printf("square root:%d\n",result);

result=pow(a,b);
printf("power of:%d\n",result);
}



