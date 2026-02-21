#include <stdio.h>
int main(){
int a[10],b,max;
    max=0;

printf("Enter a number \n:");
for(b=0;b<10;b++){
scanf("%d",&a[b]);
}
for(b=0;b<10;b++) {
 a[b]>max;
 max=a[b];
}
printf("enter a maximum number is=%d",max);
return 0;
}
