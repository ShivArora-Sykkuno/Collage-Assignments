#include<stdio.h>
void main(){
    printf("Shiv Arora\n");
    int size, count=0;
    printf("Enter number of elements\n");
    scanf("%d", &size);
    int arr[size], freq[size];
    printf("Enter the array\n");
    for(int i=0;i<size; i++){
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }
     for (int i = 0; i < size; i++) {
        int duplicateCount = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                duplicateCount++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0) {
            freq[i] = duplicateCount;
        }
    }
    for (int i = 0; i < size; i++) {
        if (freq[i] > 1) {
            count++;
        }
    }
    printf("Total number of duplicate elements: %d\n", count);

}