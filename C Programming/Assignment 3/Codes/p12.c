#include <stdio.h>
void main() {
    int n, ld, fd;
    printf("SHIV ARORA\n");
    printf("Enter a number ");
    scanf("%d", &n);
    ld = n% 10;
     while (n >= 10) {
        n /= 10;
    }
    fd = n;
    printf("%d\n", ld+fd);
}
