#include <stdio.h>
void table(int a ,int i){
for(i=1;a<=10;a++){
printf("%d x %d=%d\n",i,a,i*a);
}
}



int main(){
int i;
int a;
printf("enter a number");
scanf("%d",&a);
table(a,i);

return 0;
}
