#ifndef STUDENT_H
#define STUDENT_H

struct Student {
    int id;
    char name[50];
    float marks;
};

void display(struct Student s);

#endif
