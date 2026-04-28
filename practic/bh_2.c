#include <stdio.h>

int fact(int n){
int i,f=1;
for(i=1;i<=n;i++){
f=f*i;
}
return f;

}

int main(){
int num;
printf("enter a number\n");
scanf("%d",&num);

printf("factorial =%d",fact(num));
return 0;
}
