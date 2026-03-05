#include <stdio.h>
void stringcopy(char *name,char *name2)
{
while(*name)
{
*name2=*name;
*name++;
*name2++;
}

}


int main(){
char name[10]="bharath";
char name2[10];
stringcopy(name,name2);
printf("stringcopy=%s",name2);

return 0;
}
