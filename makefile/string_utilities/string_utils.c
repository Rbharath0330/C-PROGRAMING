#include<string.h>
#include "string_utils.h"

int my_strlen(char str[])
{
int i=0;

while(str[i] !='\0')
{
i++;
}
return i;
}

void my_strcpy(char name[],char src[])
{
 int i=0;
while(src[i] !='\0')
{
name[i]=src[i];
i++;
}
name[i]='\0';
}
