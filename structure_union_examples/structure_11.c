#include <stdio.h>
struct dop{
int date;
int month;
int year;
};

struct person{
char name[20];
struct dop d;
};

int main(){

struct person p;
int age,thisyear;


printf("enter a name");
scanf("%s",p.name);

printf("enter a date");
scanf("%d",&p.d.date);

printf("enter a month");
scanf("%d",&p.d.month);

printf("enter a year");
scanf("%d",&p.d.year);

printf("enter thisyear");
scanf("%d",&thisyear);

age=thisyear-p.d.year;

printf("\n-- person deatils--\n");
printf("Name:%s\n",p.name);
printf("DOP:%0d/%0d/%d\n",p.d.date,p.d.month,p.d.year);
printf("Age:%d years old\n",age);

return 0;
}

