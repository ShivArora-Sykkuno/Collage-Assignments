#include <stdio.h>
void main() {
    int  n, sum;
    printf("SHIV ARORA\n");
    printf("Enter a numbers ");
    scanf("%d", &n); 
   for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) sum += i; 
    }
    if (sum == n && n != 0)  printf("Perfect number.\n");
     else  printf("not a Perfect number.\n");
}
