#include<stdio.h>
void main(){
    printf("Shiv Arora\n");
    int r, c;
    printf("Enter number of rows and columns\n");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    printf("Enter elements\n");
    for(int i=0;i<r; i++){
        for(int j=0;j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The 2D array is\n");
    for(int i=0;i<r; i++){
        for(int j=0;j<c; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}