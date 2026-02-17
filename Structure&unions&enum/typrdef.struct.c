#include <stdio.h>

typedef struct {
char name[15];
int roolnum;
float mark;
}satudent;

int main(){

    struct student={"bharath",0007,98.9};
    printf("%s\n", student.name);
    printf("%d\n",student.roolnum);
    printf("%1.f\n",student.mark);
return 0;
}



