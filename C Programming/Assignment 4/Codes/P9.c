#include <stdio.h>
void main() {
    printf("Shiv Arora\n");
    int size;
    printf("Enter number of elements\n");
    scanf("%d", &size);
    printf("Enter the elements\n");
    int arr[size];
    for(int i=0;i<size; i++){
        scanf("%d", &arr[i]);
    }
    int destination[size];

    for (int i = 0; i < size; i++) {
        destination[i] = arr[i];
    }
    printf("Enter copied array is\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", destination[i]);
    }
}