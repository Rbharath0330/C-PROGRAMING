#include <stdio.h>
#include <string.h>
struct employee{

char name[10];
float salary;
};

void changebyvalue(struct employee e){
strcpy(e.name,"rocky");
e.salary=100;
}

void changepointervalue(struct employee *e){
strcpy(e->name,"bharath");
e->salary=4444;
}

int main(){
struct employee e1={"atchaya",25000};

printf("before:%s %.2f\n",e1.name,e1.salary);

changebyvalue(e1);
printf("after changevalue: %s %.2f\n",e1.name,e1.salary);

changepointervalue(&e1);
printf("after change pointer value:%s %.2f\n",e1.name,e1.salary);

return 0;
}
