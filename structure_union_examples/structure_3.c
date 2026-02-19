#include <stdio.h>

struct emplooyee{

int id;
float salary;
char department[50];
};

int main(){

struct emplooyee emp1[4];
 int i;
int highest;
for (i=0;i<4;i++)
{
printf("enter a emplooyee deatils:%d\n",i+1);

printf("enter a id");
scanf("%d",&emp1[i].id);

printf("entre a salary");
scanf("%f",&emp1[i].salary);

printf("enter a department");
scanf("%s",emp1[i].department);

}
for (i=0;i<5;i++)
{
if(emp1[i].salary>emp1[highest].salary){
highest=i;
}
}
printf("\nHighest salary deatils\n");
printf("id:%d\n",emp1[highest].id);
printf("%.2f\n",emp1[highest].salary);
printf("%s\n",emp1[highest].department);

return 0;
}
