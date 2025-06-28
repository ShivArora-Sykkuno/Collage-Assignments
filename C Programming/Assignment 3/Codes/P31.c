#include <stdio.h>
#include<math.h>
void main() {
    int  n, remainder;
    printf("SHIV ARORA\n");
    printf("Enter a numbers ");
    scanf("%d", &n); 
    for (int num = 1; num <= n; num++) {
        int org = num, remainder, ans = 0, digit = 0;

        while (org != 0) {
            org /= 10;
            digit++;
        }
        org = num;
        while (org != 0) {
            remainder = org % 10;
            ans += pow(remainder, digit);
            org /= 10;
        }
        if (ans == num) {
            printf("%d ", num);
        }
    }
}
