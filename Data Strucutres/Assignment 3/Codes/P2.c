#include <stdio.h>
int findLargest(int arr[], int size) {
    if (size == 1)
        return arr[0]; 
    int maxRest = findLargest(arr, size-1);
    return (arr[size-1] > maxRest) ? arr[size-1] : maxRest;
}

void main() {
    int size;
    printf("Enter the Size:\n");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    int arr[size];
    for (int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    int largest = findLargest(arr, size);
    printf("Largest element of the array is: %d\n", largest);
}
