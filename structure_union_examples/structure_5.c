#include <stdio.h>
 struct dates{
int day;
int month;
int year;
};

int main(){

struct dates d;

printf("enter a day");
scanf("%d",&d.day);

printf("enter a month");
scanf("%d",&d.month);

printf("enter a year");
scanf("%d",&d.year);

printf("\n confrimed date:%02d/%02d/%04d\n",d.day,d.month,d.year);
return 0;
}
