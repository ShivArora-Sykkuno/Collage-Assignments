#include <stdio.h>
void main() {
    printf("SHIV ARORA\n");
    int decimal, b[32], i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    while (decimal > 0) {
        b[i++] = decimal % 2;
        decimal /= 2;
    }
    for (i = i - 1; i >= 0; i--) {
        printf("%d", b[i]);
    }
}
