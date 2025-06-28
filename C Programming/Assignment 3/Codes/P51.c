#include <stdio.h>
void main() {
    printf("SHIV ARORA\n");
    int n, coef = 1;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for (int line = 0; line < n; line++) {
        for (int space = 0; space < n - line - 1; space++)
            printf(" ");
        coef = 1;
        for (int i = 0; i <= line; i++) {
            printf("%d ", coef);
            coef = coef * (line - i) / (i + 1);
        }
        printf("\n");
    }
}
