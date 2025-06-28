#include <stdio.h>
#include<stdlib.h>
void main() {
    printf("SHIV ARORA\n");
    char hex[100];
    long decimal;
    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);
    decimal = strtol(hex, NULL, 16);
    printf("%lo\n", decimal);
}
