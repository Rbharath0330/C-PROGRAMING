#include <stdio.h>

union data16{
unsigned short num;
unsigned char byte[2];
};
int main(){

union data16 d;

d.num=0x5677;

printf("16-bit value:0x%x\n",d.num);
printf("byte 1:0x%x\n",d.byte[0]);
printf("byte 2:0x%x\n",d.byte[1]);

return 0;

}

