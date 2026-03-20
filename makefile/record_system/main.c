#include <stdio.h>
#include "student.h"

int main(){
int a;
int b;
struct student st[10];

printf("student detiles menu:\n");
printf("1.add student\n2.search student\n3.display student:\n");
scanf("%d",&a);

if(a==1){
printf("\nenter the number student to add:\n");
scanf("%d",&b);
add(b,st);
}

if(a==2){
int f;
printf("enter a student id:\n");
scanf("%d",&f);
search(f,st);
}

if(a==3){
int d;
printf("number of student want to display\n");
scanf("%d",&d);
display(d,st);
}

return 0;
}
