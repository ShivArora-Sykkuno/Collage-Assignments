#include <stdio.h>
void main() {
    printf("SHIV ARORA\n");
    int oct, decimal = 0, b = 0, i = 1;
    printf("Enter an octal number: ");
    scanf("%d", &oct);
    while (oct != 0) {
        decimal += (oct % 10) * i;
        oct /= 10;
        i *= 8;
    }
    i = 1;
    while (decimal != 0) {
        b += (decimal % 2) * i;
        decimal /= 2;
        i *= 10;
    }
    printf("%d\n", b);
}
