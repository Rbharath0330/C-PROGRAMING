#include <stdio.h>
int main(){
 
int num;
int a;
printf("Enter a number:");
scanf("%d", &num);
for(a=1; a<=10;a++){

    printf("%d x %d =%d\n",a,num,a*num);
}
return 0;
}
