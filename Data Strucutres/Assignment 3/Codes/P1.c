#include <stdio.h>
int findGCD(int a, int b) {
    if (b == 0)
        return a;
    return findGCD(b, a % b);
}

void main() {
    printf("Shiv Arora\n");
    int n1, n2;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    int gcd = findGCD(n1, n2);
    printf("GCD of %d and %d is %d\n", n1, n2, gcd);
}
