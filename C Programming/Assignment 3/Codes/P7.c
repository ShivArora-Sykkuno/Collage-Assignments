#include <stdio.h>
void main() {
    int n;
    printf("SHIV ARORA\n");
    printf("Enter a number ");
    scanf("%d", &n);
    int sum = 0;
    int i = 1;
    while(i <= n){
        if (i% 2 == 0)
            sum += i;
        i++;
    }printf("SUM  = %d\n", sum);
}
