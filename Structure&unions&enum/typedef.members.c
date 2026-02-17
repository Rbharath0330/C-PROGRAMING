#include <stdio.h>
typedef struct{
int id;
char name[10];
float salary;
}emplooye;

void printemplooye(emplooye emp){
printf("id:%d\n",emp.id);
printf("name:%s\n",emp.name);
printf("salary:%.2f\n",emp.salary);
}
int main(){
emplooye emp={347,"bharath",80000.50};
printemplooye(emp);

return 0;
}


