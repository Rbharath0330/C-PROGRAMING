#include <stdio.h>
 typedef unsigned short u16;
 typedef unsigned int u32;
 typedef unsigned long u64;

int main(){

u16 a=4;
u32 b=6;
u64 c=100;

printf("u16 value=%lu\n",sizeof(a));
printf("u32 value=%lu\n",sizeof(b));
printf("u64 value=%lu\n",sizeof(c));

return 0;
}
