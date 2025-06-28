#include<stdio.h>
void main(){
    printf("Shiv Arora\n");
    int n;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements\n");
    for(int i=0;i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++) { 
            if(arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
        printf("Second largest element is %d ", arr[1]);
}