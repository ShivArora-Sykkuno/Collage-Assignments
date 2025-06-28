#include <stdio.h>
#include<stdlib.h>
void main() {
    printf("SHIV ARORA\n");
    char hex[100];
    int decimal;
    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);
    decimal = strtol(hex, NULL, 16);
    for (int i = sizeof(decimal) * 8 - 1; i >= 0; i--) {
        printf("%d", (decimal >> i) & 1);
    }
}
