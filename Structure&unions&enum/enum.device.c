#include <stdio.h>
 typedef enum {
init,
running,
error
}device;

void update(device *currentstate,device nextstate)
{
*currentstate=nextstate;
}
int main(){
 device state=init;
printf("initian state=%d\n",state);

update(&state,running);
printf("running=%d\n",state);

update(&state,error);
printf("error=%d\n",state);

return 0;
}
