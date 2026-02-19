#include <stdio.h>

struct student{
char name[50];
int rollnum;
float mark;
};
int main(){
 struct student s1[5];
int i;

for(i=0;i<5;i++){

printf("enter a student deatils:%d\n",i+1);

printf("enter a name");
scanf("%s",s1[i].name);

printf("enter a rollnum");
scanf("%d",&s1[i].rollnum);

printf("enter a mark");
scanf("%f",&s1[i].mark);
}
for(i=0;i<5;i++){
printf("name:%s\n",s1[i].name);
printf("rollnum:%d\n",s1[i].rollnum);
printf("mark:%.1f\n",s1[i].mark);
}
return 0;
}

