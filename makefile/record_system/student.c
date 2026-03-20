
#include <stdio.h>
#include "student.h"
#include <string.h>

void add(int n,struct student st[])
{
int i;
for(i=0;i<n;i++)
{
printf("enter id");
scanf("%d",&st[i].id);

printf("enter name:");
scanf("%s",st[i].name);

printf("enter marks:");
scanf("%f",&st[i].mark);
 }
}

void search(int id,struct student st[])
{
int i;
for(i=0;i<10;i++)
{
if(st[i].id==id)
{
    printf("stident found\n");	
    printf("id:%d\n",st[i].id);
    printf("name:%s\n",st[i].name);
    printf("mark:%f\n",st[i].mark);
    return;
}
}
  printf("student not found\n");
}

void display(int n,struct student st[])
{
int i;
for(i=0;i<n;i++)
{
   printf("\nstudent %d\n",i+1);
   printf("id:%d\n",st[i].id);
   printf("name:%s\n",st[i].name);
   printf("marks:%f\n",st[i].mark);
   }
 }
