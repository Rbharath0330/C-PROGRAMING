#include<stdio.h>
#include<string.h>

int main(){
char str1[10],str2[10];
char *p1,*p2;
 printf("enter a name");
 scanf("%s",str1);

p1=str1;
p2=str2;
while(*p1!='\0')
{
*p2=*p1;
p1++;
p2++;
}
*p2='\0';
printf("copy string u=%s",str2);

return 0;
}

