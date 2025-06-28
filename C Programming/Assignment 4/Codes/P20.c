#include <stdio.h>
void main() {
    printf("Shiv Arora\n");
    int n, sum = 0;
    printf("Enter number of elements ");
    scanf("%d", &n);
    int mat[n][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        sum += mat[i][n - i - 1];
    }
    printf("Sum of the right diagonal elements: %d\n", sum);
}