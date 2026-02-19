#include <stdio.h>
 struct student {
int id;
char name[10];
float mark;
};

int main(){

struct student s;

printf("enter a id");
scanf("%d",&s.id);

printf("enter a name");
scanf("%s",s.name);

printf("enter a mark");
scanf("%f",&s.mark);

printf("\nstudent deatils\n");
printf("id:%d\n",s.id);
printf("name:%s\n",s.name);
printf("mark:%.1f\n",s.mark);

return 0;
}
