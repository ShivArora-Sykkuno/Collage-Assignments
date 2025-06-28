#include <stdio.h>
void main() {
    int n, rev = 0;
    printf("SHIV ARORA\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0) {
        rev = rev*10 + n%10; 
        n /= 10;    
    }
    printf("Reverse = %d\n", rev);
}
