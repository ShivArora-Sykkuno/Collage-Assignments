#include <stdio.h>
void main() {
    int n;
    printf("SHIV ARORA\n");
    printf("Enter a number ");
    scanf("%d", &n);
    int i = 0;
    while(n != 0){
        n /= 10; 
        i++;
    }printf("%d\n", i);
}
