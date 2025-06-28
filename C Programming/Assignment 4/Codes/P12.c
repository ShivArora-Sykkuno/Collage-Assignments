#include<stdio.h>
void main(){
    printf("Shiv Arora\n");
    int size, pos;
    printf("Enter number of elements\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the array\n");
    for(int i=0;i<size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the position of the element to delete (1 to %d): ", size);
    scanf("%d", &pos);

    for (int i = pos - 1; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    printf("Array after deletion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
