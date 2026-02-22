#include <stdio.h>
int main()
{
int x=77;
int *p;
int **pp;

p=&x;
pp=&p;

printf("value of  x=%d\n",x);
printf("value p((*p)=%d\n",*p);
printf("value using pp(**pp)=%d\n",**pp);

return 0;
}
