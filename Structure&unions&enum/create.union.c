#include <stdio.h>
union types{
int i;
float f;
char c;
};

int main(){

union types t;
printf("size of union =%lu bytes\n", sizeof(t));

t.i=65;
printf("\n after chance int:");
printf("\ni=%d",t.i);
printf("\nf=%.2f",t.f);
printf("\nc=%c",t.c);

t.f=7.5;
printf("\n after change float:");
printf("\ni=%d",t.i);
printf("\nf=%.2f",t.f);
printf("\nc=%c",t.c);

t.c='B';
printf("\n after change char:");
printf("\ni=%d",t.i);
printf("\nf=%.2f",t.f);
printf("\nc=%c",t.c);

return 0;
}


