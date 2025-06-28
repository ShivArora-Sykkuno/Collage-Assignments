#include <stdio.h>
void main() {
    int  n1, n2 , hcf;
    printf("SHIV ARORA\n");
    printf("Enter two numbers ");
    scanf("%d %d", &n1, &n2); 
    while (n2 != 0) {
        hcf = n2;
        n2 = n1 % n2;
        n1 = hcf;
    }
    printf("HCF = %d", hcf);
}
