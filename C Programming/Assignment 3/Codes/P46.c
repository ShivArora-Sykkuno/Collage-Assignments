#include <stdio.h>
void main() {
    printf("SHIV ARORA\n");
     int decimal, oct = 0, i = 1;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    while (decimal > 0) {
        oct += (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    }
    printf("%d\n", oct);
}
