#include <stdio.h>
void main() {
    int  n;
    printf("SHIV ARORA\n");
    printf("Enter a numbers ");
    scanf("%d", &n); 
   for (int num = 1; num <= n; num++) {
        int sum = 0;
        for (int i = 1; i <= num / 2; i++) {
            if (num % i == 0) sum += i;
        }
        if (sum == num) printf("%d ", num);
    }
}
