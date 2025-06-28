#include <stdio.h>
void main() {
    int  n1, n2 , hcf, lcm;
    printf("SHIV ARORA\n");
    printf("Enter two numbers ");
    scanf("%d %d", &n1, &n2); 
    int t1= n1, t2 = n2;
    while (n2 != 0) {
        hcf = n2;
        n2 = n1 % n2;
        n1 = hcf;
    }
    lcm = (t1 * t2) / hcf;
    printf("LCM = %d", lcm);
}
