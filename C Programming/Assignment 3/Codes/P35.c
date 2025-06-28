#include <stdio.h>
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}
void main() {
    int  n;
    printf("SHIV ARORA\n");
    printf("Enter a numbers ");
    scanf("%d", &n); 
    for (int i = 1; i<= n; i++) {
        int sum = 0, org = i;
        while (org != 0) {
            int digit = org % 10;
            sum += factorial(digit);
            org /= 10; 
        }
        if (sum == i) printf("%d ", i);
        
    }
}
