#include <stdio.h>

int strln(char str[])
{
int i=0;
while(str[i] !='\0')
{
i++;
}
 return i;
}
int main(){
char str[10];
int length=0;

printf("entre a string:");
scanf("%s",str);

length=strln(str);

printf("length of string=%d",length);

return 0;
}
