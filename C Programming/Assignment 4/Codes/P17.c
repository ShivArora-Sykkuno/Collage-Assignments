#include <stdio.h>
void main() {
    printf("Shiv Arora\n");
    int r, c;
    printf("Enter the number of rows and columns : ");
    scanf("%d %d", &r, &c);

    int mat1[r][c], mat2[r][c], sum[r][c];
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("Matrix after addition:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j] = printf("%d ", mat1[i][j] - mat2[i][j]);
        }
        printf("\n");
    }
}
