#include <stdio.h>

typedef enum {
cw,
ccw
}direction;

typedef struct {

 int speed;
 direction dir;
}motor;
int main(){
motor a1;

a1.speed=1700;
a1.dir=ccw;

printf("speed=%d\n",a1.speed);
printf("direction=%d\n",a1.dir);

return 0;
}
