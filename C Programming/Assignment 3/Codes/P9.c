#include <stdio.h>
void main() {
    int n;
    printf("SHIV ARORA\n");
    printf("Enter a number ");
    scanf("%d", &n);
    int i = 1;
    while(i <= 10){
        printf("%d * %d = %d\n", n, i, n*i);    
        i++;
    }printf("\n");
}
