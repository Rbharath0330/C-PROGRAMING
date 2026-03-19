#include <stdio.h>
#include<string.h>
#include "file_ops.h"

int main(){

int a;
char fw[100];

printf("1.write\n2.read\n");
scanf("%d",&a);

if(a==1){
read_file();
}
if(a==2){
write_file(fw);
}
return 0;
}
