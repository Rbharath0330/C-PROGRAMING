#include <stdio.h>
struct engine{
int cylinder;
char types[20];
float mailage;
};

struct car{
char name[10];
int year;
int month;
int date;
float price;
struct engine e;
};

int main(){

struct car c;

printf("enter car name");
scanf("%s",c.name);

printf("enter manufacturing date");
scanf("%d",&c.date);
scanf("%d",&c.month);
scanf("%d",&c.year);

printf("enter a price");
scanf("%f",&c.price);

printf("number of cylinder");
scanf("%d",&c.e.cylinder);

printf("enter a type");
scanf("%s",c.e.types);

printf("enter a mailage");
scanf("%f",&c.e.mailage);

printf("\n--car deatils--\n");

printf("%s\n",c.name);
printf("%02d/02%d/04%d\n",c.date,c.month,c.year);
printf("%.3f\n",c.price);
printf("%d\n",c.e.cylinder);
printf("%s\n",c.e.types);
printf("%.2f\n",c.e.mailage);
return 0;
}





