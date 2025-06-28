#include <stdio.h>
void main() {
    int  n, remainder, ans =0;
    printf("SHIV ARORA\n");
    printf("Enter a numbers ");
    scanf("%d", &n); 
    int org = n;
    while (org != 0) {
        remainder = org % 10; 
        ans += remainder * remainder * remainder; 
        org /= 10; 
    }
    if (ans == n) {
        printf("Armstrong number.\n");
    } else {
        printf("not an Armstrong number.\n");
    }
}
