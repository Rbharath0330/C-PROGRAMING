#include <stdio.h>

int main(){
int a[3][3]={1,2,3,4,5,6,7,8,9};
int (*ptr)[3]=a;
 printf("{%d %d %d\n",(*ptr)[0],(*ptr)[1],(*ptr)[2]);
++ptr;
printf(" %d %d %d\n",(*ptr)[0],(*ptr)[1],(*ptr)[2]);
++ptr;
printf(" %d %d %d}",(*ptr)[0],(*ptr)[1],(*ptr)[2]);
return 0;
}
