#include <stdio.h>
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}
void main() {
    int  n, sum=0;
    printf("SHIV ARORA\n");
    printf("Enter a numbers ");
    scanf("%d", &n); 
    int org = n;
    while (n != 0) {
        int digit = n % 10;
        sum += factorial(digit); 
        n /= 10; 
    }
    if (sum == org) {
        printf("Strong number.\n");
    } else {
        printf("not a Strong number.\n");
    }
}
