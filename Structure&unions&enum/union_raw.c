#include <stdio.h>

union data{
unsigned char a[2];
};
int main(){
union data raw;

printf("adress of  memory:%p\n",&raw.a[0]);
printf("adress of memory:%p\n",&raw.a[1]);

return 0;
}
