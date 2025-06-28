#include <stdio.h>
void main() {
    printf("SHIV ARORA\n");
    int oct, decimal = 0, i = 0;
    printf("Enter an octal number: ");
    scanf("%d", &oct);
    while (oct != 0) {
        decimal += (oct % 10) * (1 << (3 * i));
        oct /= 10;
        i++;
    }
    printf("%d\n", decimal);
}
