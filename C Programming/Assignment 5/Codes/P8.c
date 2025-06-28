#include <stdio.h>
#include<stdbool.h>
bool isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}
void findPerfectNumbers(int low, int high) {
    printf("The perfect numbers between %d to %d are:\n", low, high);
    for (int i = low; i <= high; i++) {
        if (isPerfect(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
void main() {
    printf("SHIV ARORA\n");
    int low, high;
    printf("Input lowest limit: ");
    scanf("%d", &low);
    printf("Input highest limit: ");
    scanf("%d", &high);
    findPerfectNumbers(low, high);
}
