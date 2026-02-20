#include <stdio.h>

struct adress{
char city[20];
int pincode;
};

struct people{
char name[20];
int age;
struct adress adrr;
};

int main(){

struct people p;

printf("enter a name");
scanf("%s",p.name);

printf("enter a age");
scanf("%d",&p.age);

printf("enter a city");
scanf("%s",p.adrr.city);

printf("enter a pincode");
scanf("%d",&p.adrr.pincode);

printf("\n-- pepole deatils--\n");

printf("%s\n",p.name);
printf("%d\n",p.age);
printf("%s\n",p.adrr.city);
printf("%d\n",p.adrr.pincode);

return 0;
}

