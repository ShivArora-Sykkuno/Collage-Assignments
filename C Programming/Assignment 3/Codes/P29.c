#include <stdio.h>
int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; 
    }
    return 1; 
}
void main() {
    int  n;
    printf("SHIV ARORA\n");
    printf("Enter a numbers ");
    scanf("%d", &n); 
    for (int i = 2; i <= n; i++) {
        
        while (n % i == 0) {
            if (isPrime(i)) { 
                printf("%d ", i); 
            }
            n /= i;
        }
    }
}
