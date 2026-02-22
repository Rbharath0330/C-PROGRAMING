#include <stdio.h>

void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
int main(){
int x=34;
int y=77;
 printf("before swap:x=%d,y=%d\n",x,y);
swap(&x,&y);
printf("aftrer swap:x=%d,y=%d\n",x,y);
return 0;

}
