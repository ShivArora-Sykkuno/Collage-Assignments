#include <stdio.h>
void main() {
    int n, fd, ld, swap, digits = 0;
    printf("SHIV ARORA\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp = n;
    ld = n % 10;
    while (n >= 10) {
        n /= 10;
        digits++;
    }
    fd = n;
    swap = ld;
    for (int i = 0; i < digits - 1; i++) {
        temp = temp / 10;
        swap = swap * 10 + (temp % 10);
    }
    swap = swap * 10 + fd;
    printf("Swapperd Number %d\n", swap);
}
