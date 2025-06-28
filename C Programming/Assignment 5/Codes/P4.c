#include <stdio.h>
void main() {
    printf("SHIV ARORA\n");
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    int arr[size];
    int *ptr = arr;
    printf("Enter elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", ptr + i);
    }
    printf("Elements in array are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(ptr + i));
    }
}
