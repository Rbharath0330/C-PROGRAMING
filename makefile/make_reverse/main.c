#include <stdio.h>
#include "util.h"

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    printf("Original:\n");
    printArray(arr, 5);

    reverseArray(arr, 5);

    printf("Reversed:\n");
    printArray(arr, 5);

    return 0;
}
