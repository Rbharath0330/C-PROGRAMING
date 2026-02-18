#include <stdio.h>
typedef enum{
on,
off
}status;

typedef struct{
int device_id;
status status;
}device;

int main(){
device  d1;

d1.device_id=107;
d1.status=on;

printf("device id:%d\n",d1.device_id);
if(d1.status==on){
  printf("status:on\n");
}
else{

printf("status: off\n");
}

return 0;
}
