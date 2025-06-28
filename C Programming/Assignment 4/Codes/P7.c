#include<stdio.h>
int main(){
    printf("Shiv Arora\n");
    int n;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements\n");
    for(int i=0;i<n-1; i++){
        scanf("%d", &arr[i]);
    }
    int x;
    printf("Enter an elemet to insert\n");
    scanf("%d", &x);
    arr[n-1] = x;
    for(int i=0;i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}