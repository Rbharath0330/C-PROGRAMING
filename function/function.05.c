#include <stdio.h>
int maximum(int a,int b){
if(a>b){
  return a;
}
else{
return b;
}
}



int main(){
int a=10;
int b=15;
int result=maximum(a,b);
printf("maximum is:%d",result);
return 0;
}



