#include <stdio.h>
int main(){
int arr[]={10,20,30,40,50};
int *p=arr;
int i;

printf("using *(p+i):");
 for(i=0;i<5;i++)
printf("%d",*(p+i));

printf("\nusing p[i]:");
 for(i=0;i<5;i++);
printf("%d",p[i]);

printf("\nusing *(i+p):");
 for(i=0;i<5;i++);
printf("%d",*(i+p));

return 0;
}
