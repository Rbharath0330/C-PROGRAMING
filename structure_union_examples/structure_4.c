#include <stdio.h>
struct student {
int id;
char name[10];
float mark;
};
int main(){
struct student s[5];

int i,n;
float sum=0,average;

printf("enter number of studenbts:");
scanf("%d",&n);

for (i=0;i<n;i++){
printf("\n students %d\n",i+1);

printf("entera id:");
scanf("%d",&s[i].id);

printf("enter name:");
scanf("%s",s[i].name);

printf("enter a mark");
scanf("%f",&s[i].mark);

sum=sum+s[i].mark;
}
average=sum/n;

printf("\n average marks=%.2f\n",average);

return 0;
}
