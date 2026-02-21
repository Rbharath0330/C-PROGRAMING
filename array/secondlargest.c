#include <stdio.h>
int main(){
int a[]={22,33,66,55,77,};
int sec=0;
int max=0;
for(int i=0;i<5;i++){
if(a[i]>max){
sec=max;
max=a[i];
}
else if (a[i]>sec &&  a[i]!=max){
sec=a[i];
}
}
printf("%d",sec);
return 0;
}

