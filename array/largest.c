 #include <stdio.h>
int main(){
int a[10],i,max;
max=0;
printf("enter a 10 numbers=\n");
for(i=0;i<10;i++){
scanf("%d",&a[i]);
}
for(i=0;i<10;i++){
if (a[i]>max){

max=a[i];
}
}
printf("The maximum number is=%d",max);
return 0;
}
