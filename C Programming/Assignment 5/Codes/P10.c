#include <stdio.h>
void decimalToBinary(int num) {
    if (num == 0) {
        return;
    }
    decimalToBinary(num / 2);
    printf("%d", num % 2);
}
void main() {
    printf("SHIV ARORA\n");
    int num;
    printf("Input any number: ");
    scanf("%d", &num);
    printf("Binary = ");
    if (num == 0) {
        printf("0");
    } else {
        decimalToBinary(num);
    }
    printf("\n");
}