#include <stdio.h>


void reverseArray(int *ptr, int size) {
    int *start = ptr;
    int *end = ptr + size - 1;
    int temp;

    while (start < end) {
        
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int i;

    printf("Original Array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    reverseArray(arr, 5);

    printf("\nReversed Array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
