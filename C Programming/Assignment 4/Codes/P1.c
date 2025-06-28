#include<stdio.h>
int main(){
    printf("Shiv Arora\n");
    int n;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements\n");
    for(int i=0;i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}