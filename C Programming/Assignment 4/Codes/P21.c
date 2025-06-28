#include <stdio.h>
void main() {
    printf("Shiv Arora\n");
    int r, c;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int matrix[r][c];
    int rowSum[r], colSum[c];
    for (int i = 0; i < r; i++) rowSum[i] = 0;
    for (int j = 0; j < c; j++) colSum[j] = 0;
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }
    }
    // Rows sums
    for (int i = 0; i < r; i++) {
        printf("%d Rows sum is: %d\n", i + 1, rowSum[i]);
    }

    printf("\n");
    // Column sums
    for (int i = 0; i < c; i++) {
        printf("%d Columns sum is: %d\n", i + 1, colSum[i]);
    }
}
