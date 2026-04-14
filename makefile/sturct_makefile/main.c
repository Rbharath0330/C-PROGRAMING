#include <stdio.h>
#include <string.h>
#include "student.h"

int main() {
struct Student s1;
s1.id = 1;
strcpy(s1.name, "Bharath");
s1.marks = 89.5;

    display(s1);

    return 0;
}
