#include <stdio.h>
void main() {
    int  n, sum=0;
    printf("SHIV ARORA\n");
    printf("Enter a numbers ");
    scanf("%d", &n); 
    for (int i = 2; i <= n; i++) {
        int prime_check = 1; 
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                prime_check = 0; 
                break;
            }
        }
        if (prime_check) {
            sum += i;
        }
    }
    printf("%d", sum);
}
