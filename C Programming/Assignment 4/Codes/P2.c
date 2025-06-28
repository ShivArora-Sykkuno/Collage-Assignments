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
    int maxx = arr[0];
    int min = arr[0];
    for(int i=1;i<n; i++){
        if(arr[i] > maxx)
            maxx = arr[i];
        else if (arr[i]< min)
            min = arr[i];
    }
    printf("Maximum = %d, Minimum = %d", maxx, min);
    return 0;
}