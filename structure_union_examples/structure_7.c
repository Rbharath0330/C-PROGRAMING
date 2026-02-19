#include <stdio.h>

struct person{
int age;
char name[10];
float salary;
};

void print(struct person p)
{
printf("\n person details:\n");
printf("age:%d\n",p.age);
printf("name:%s\n",p.name);
printf("salary:%f\n",p.salary);
}

int main(){
 struct person p1;
printf("enter a age");
scanf("%d",&p1.age);

printf("enter a name");
scanf("%s",p1.name);

printf("enter a salary");
scanf("%f",&p1.salary);

print(p1);

return 0;
}
