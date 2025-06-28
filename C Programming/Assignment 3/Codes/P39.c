#include <stdio.h>
#include <string.h>
void main() {
    printf("SHIV ARORA\n");
    char b[100];
    int decimal = 0, octal = 0, remain;
    printf("Enter a binary number: ");
    scanf("%s", b);
    for (int i = 0; b[i] != '\0'; i++) {
        decimal = decimal * 2 + (b[i] - '0');
    }
    int a = 1;
    while (decimal != 0) {
        remain = decimal % 8;
        octal += remain * a;
        decimal /= 8;
        a *= 10;
    }
    printf("%d\n", octal);
}
