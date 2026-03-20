#ifndef STUDENT_H
#define STUDENT_H
 struct student {
int id;
char name[10];
float mark;
};

void add(int n,struct student st[]);
void search(int id,struct student st[]);
void display(int n,struct student st[]);

#endif
