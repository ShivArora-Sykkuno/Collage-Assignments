#include <stdio.h>
void main() {
    int  n;
    printf("SHIV ARORA\n");
    printf("Enter the number ");
    scanf("%d", &n); 
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)  printf("%d ", i);
    }
}
