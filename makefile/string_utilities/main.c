#include <stdio.h>
#include"string_utils.h"

int main(){

char str1[150];
char str2[150];
int len;

printf("enter a string:");
scanf("%s",str1);

len= my_strlen(str1);
printf("length=%d\n",len);

my_strcpy(str2,str1);
printf("copied string=%s\n",str2);

return 0;
}

