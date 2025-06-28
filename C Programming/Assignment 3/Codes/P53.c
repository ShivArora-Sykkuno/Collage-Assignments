#include <stdio.h>
void halfPyramid(int rows) {
     for (int i = 1; i <= rows; ++i)   {  
        for (int j = 1; j <= i; ++j)   {  
            printf ("%d ", j);   
        }  
        printf ("\n");   
    }  
}
void invertedHalfPyramid(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
}
void hollowHalfPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n)
                printf("%d ", j);
            else
                printf("  ");
        }
        printf("\n");
    }
}
void fullPyramid(int rows) {
    for (int i =1; i <= rows; i++) {  
        for (int j = 1; j <= rows - i; j++) {  
            printf ("  "); 
        }  
        for (int k = 1; k <= ( 2 * i - 1); k++){  
            printf ("%d ",i);
        }  
        printf ("\n");  
    }  
}
void hollowFullPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++)
            printf(" ");
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1))
                printf(" %d", i);
            else
                printf(" ");
        }
        printf("\n");
    }
    for (int i = 1; i <= n; i++)
        printf("%d  ", i);
}
void hollowInvertedPyramid(int n) {
   for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1) {
                printf("%d ", j);
            } else if (j == i || j == n) {
                printf("%d ", j);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main() {
    printf("SHIV AROR\n");
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("\nHalf Pyramid:\n");
    halfPyramid(n);
    printf("\nInverted Half Pyramid:\n");
    invertedHalfPyramid(n);
    printf("\nHollow Half Pyramid:\n");
    hollowHalfPyramid(n);
    printf("\nFull Pyramid:\n");
    fullPyramid(n);
    printf("\nHollow Full Pyramid:\n");
    hollowFullPyramid(n);
    printf("\nHollow Inverted Pyramid:\n");
    hollowInvertedPyramid(n);
}
