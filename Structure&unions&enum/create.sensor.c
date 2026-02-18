#include <stdio.h>
typedef enum{
temp,
pressure,
humidity
}unit;

typedef struct{
int value;
unit un;
}sensor;

int main(){
sensor a1;

a1.value=30;
a1.un=pressure;

printf("value=%d\n",a1.value);
printf("unit=%d\n",a1.un);

return 0;
}
