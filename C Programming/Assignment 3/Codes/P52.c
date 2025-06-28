#include <stdio.h>
void pyramidPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++)
            printf(" ");
        for (int j = 0; j <= i; j++)
            printf("* ");
        printf("\n");
    }
}
void inverseRightTriangle(int n) {
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++)
            printf("* ");
        printf("\n");
    }
}
void hollowInvertedPyramid(int n) {
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < n - i; j++)
            printf(" ");
        for (int j = 0; j < (2 * i - 1); j++) {
            if (j == 0 || j == (2 * i - 2) || i == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void hollowPyramid(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++)
            printf(" ");
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i || i == n - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}
void diamondPattern(int n) {
    int i, k, count = n - 1;
    for (k = 1; k <= n; k++) {
        for (i = 1; i <= count; i++)
            printf(" ");
        count--;
        for (i = 1; i <= 2 * k - 1; i++)
            printf("*");
        printf("\n");
    }
    count = 1;
    for (k = 1; k <= n - 1; k++) {
        for (i = 1; i <= count; i++)
            printf(" ");
        count++;
        for (i = 1; i <= 2 * (n - k) - 1; i++)
            printf("*");
        printf("\n");
    }
}
void halfDiamondPattern(int n) {
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < i; j++)
            printf("* ");
        printf("\n");
    }
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++)
            printf("* ");
        printf("\n");
    }
}
void main() {
    printf("SHIV ARORA\n");
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Pyramid Pattern:\n");
    pyramidPattern(n);
    printf("Inverse Right Triangle:\n");
    inverseRightTriangle(n);
    printf("Hollow Inverted Pyramid:\n");
    hollowInvertedPyramid(n);
    printf("Hollow Pyramid:\n");
    hollowPyramid(n);
    printf("Diamond Star Pattern:\n");
    diamondPattern(n);
    printf("\nHalf Diamond Pattern:\n");
    halfDiamondPattern(n);
}
