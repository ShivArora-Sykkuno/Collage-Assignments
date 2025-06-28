#include <stdio.h>
#include <stdlib.h>
void main() {
    printf("SHIV ARORA\n");
    int size;
    int *arr, largest;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    arr = (int *)malloc(size * sizeof(int));
    printf("Enter elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    printf("Largest = %d\n", largest);
    free(arr);
}
