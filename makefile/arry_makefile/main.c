#include <stdio.h>
#include "sum.h"

int main() {
int arr[] = {10, 20, 30, 40, 50};

int n = sizeof(arr) / sizeof(arr[0]);

int result = sum_array(arr, n);

printf("Sum of array = %d\n", result);

    return 0;
}
