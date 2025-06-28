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
    int sum = 0;
    for(int i=0;i<n; i++){
        sum += arr[i];
    }
    printf("%d", sum);
    return 0;
}