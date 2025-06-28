#include <stdio.h>
void main() {
    printf("Shiv Arora\n");
    int n, isIdentity = 1;
    printf("Enter number of elements\n");
    scanf("%d", &n);

    int mat[n][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j && mat[i][j] != 1) {
                isIdentity = 0; 
            } else if (i != j && mat[i][j] != 0) {
                isIdentity = 0;
            }
        }
    }
    if (isIdentity) {
        printf("The matrix is an identity matrix.\n");
    } else {
        printf("The matrix is NOT an identity matrix.\n");
    }
}
