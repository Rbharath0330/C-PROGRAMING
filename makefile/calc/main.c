#include <stdio.h>
#include "calc.h"

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Square = %d\n", square(num));
    printf("Cube   = %d\n", cube(num));

    return 0;
}
