#include <stdio.h>
 struct time{
int hours;
int minutes;
int seconds;
};
int main(){

struct time t;
int totalseconds;

printf("enter a hours");
scanf("%d",&t.hours);

printf("enter a minutes");
scanf("%d",&t.minutes);

printf("entre a seconds");
scanf("%d",&t.seconds);

totalseconds =(t.hours * 3600) + (t.minutes * 60)+t.seconds;
printf("\ntotal seconds =%d\n",totalseconds);

return 0;
}
