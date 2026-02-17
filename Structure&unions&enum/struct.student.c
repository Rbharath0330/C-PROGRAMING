#include <stdio.h>
typedef struct{
char name[10];
int roolnum;
float mark;
}student;
int main(){

student s1[5];
int i;
int topper=0;

for(i=0;i<5;i++){

printf("enter e student details:%d\n",i+1);
printf("enter a name of student:\n");
scanf("%s",s1[i].name);

printf(" enter a rool number:\n");
scanf("%d",&s1[i].roolnum);


printf("enter a student mark:\n");
scanf("%f",&s1[i].mark);
}
for (i=0;i<5;i++){
if(s1[i].mark>s1[topper].mark){
topper=i;
}
}

printf("topper details\n");
printf("name:%s\n",s1[topper].name);
printf("roolnum:%d\n",s1[topper].roolnum);
printf("mark:%f\n",s1[topper].mark);

return 0;
}

