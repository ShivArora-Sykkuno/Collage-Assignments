#include <stdio.h>
void main() {
    int  n , prime_check;
    printf("SHIV ARORA\n");
    printf("Enter a numbers ");
    scanf("%d", &n); 
     if (n < 2) {
        prime_check = 0; 
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                prime_check = 0;
                break;
            }
        }
    }
    if (prime_check) {
        printf("prime number.\n");
    } else {
        printf("not a prime number.\n");
    }
}
