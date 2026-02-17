#include <stdio.h>
#include <string.h>
typedef struct{
int id;
char name[30];
float salary;
}emplooye;

void updateemployee (employee *emp){

emp->id=201;
strcpy(emp->name,"rocky");
emp->salary=70000.80;
}
int main(){
employee emp={101,"bharath",50000.50};

printf("before update:\n");
printf("id:%d,name:%s,salary:%.2f\n",emp.id,emp.name,emp.salary);

updateemployee(&emp);

printf("\nafter update:\n");
printf("id:%d,name:%s,salary:%.2f\n",emp.id,emp.name,emp.salary);

return 0;
}

