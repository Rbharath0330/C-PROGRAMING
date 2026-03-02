#include <stdio.h>
void swap(int *a,int *b){
       int temp=*a;
           *a=*b;
           *b=temp;
printf("function swaping");
printf("%d,%d\n",*a,*b);
}



int main(){
int x=10,y=20;
printf("before swaping");
printf("%d,%d\n",x,y);

swap(x,y);

printf("after swaping");
printf("%d,%d\n:",x,y);

return 0;
}
