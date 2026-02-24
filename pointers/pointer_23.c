#include <stdio.h>
int main(){
char str1[10],str2[10];
char *p1,*p2;

printf("enter a first name:");
scanf("%s",str1);

printf("enter a second name:");
scanf("%s",str2);

p1=str1;
p2=str2;

while (*p1 == *p2 && *p1 !='\0')
{
p1++;
p2++;
}

if (*p1=='\0' && *p2 =='\0')
   printf("string are  equal");
else
   printf("strings are not equal");
return 0;
}
