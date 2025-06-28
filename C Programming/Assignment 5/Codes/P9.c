#include <stdio.h>
int countDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return 1 + countDigits(n / 10);
}
void main() {
    printf("SHIV ARORA\n");
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Number of digits: %d\n", countDigits(n));
}