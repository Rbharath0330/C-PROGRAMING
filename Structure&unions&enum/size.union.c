#include <stdio.h>
struct struct1{
int i;
float f;
double d;
};

union unio1{
int i;
float f;
double d;
};

int main(){
printf("size of structure =%lu bytes\n",sizeof(struct struct1));
printf("size of union =%lu bytes\n",sizeof(union unio1));

return 0;
}
