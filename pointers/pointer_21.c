#include <stdio.h>

int main(){
char a[10];
char *ptr;
int length=0;

printf("enter a word:");
scanf("%s",a);

ptr=a;

while(*ptr !='\0')
{
length++;
ptr++;
}

printf("length of string=%d",length);

return 0;
}
