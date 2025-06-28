#include <stdio.h>
void main() {
    printf("Shiv Arora\n");
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    printf("Enter elements of the 1st array:\n");
    int arr1[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of the 2nd array:\n");
    int arr2[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }
    int final[size * 2];
    for (int i = 0; i < size; i++) {
        final[i] = arr1[i];
    }
    for (int i = 0; i < size; i++) {
        final[size + i] = arr2[i];
    }
    for (int i = 0; i < size * 2; i++) {
        for (int j = i + 1; j < size * 2; j++) {
            if (final[i] < final[j]) {
                int temp = final[i];
                final[i] = final[j];
                final[j] = temp;
            }
        }
    }
    printf("Sorted merged array in descending order:\n");
    for (int i = 0; i < size * 2; i++) {
        printf("%d ", final[i]);
    }
    printf("\n");
}
