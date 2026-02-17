#include <stdio.h>
 enum errors{
success,
file_not_found,
invalid_input,
out_of_memory,
};

int main(){
int error;
printf("enter a number (0,1,2,3)");
scanf("%d",&error);

switch (error) {

case 0:
   printf("no error");
break;
case 1:
   printf("file_not_found");
break;
case 2:
   printf("invalid_memory");
break;
case 3:
   printf("out_of_memory");
break;
defalut:
   printf(" invalid program");
}

return 0;
}

