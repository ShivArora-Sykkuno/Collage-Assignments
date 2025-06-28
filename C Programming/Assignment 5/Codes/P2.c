#include <stdio.h>
void main() {
    printf("SHIV ARORA\n");
    int n1, n2, sum;
    int *ptr1, *ptr2, *ptr_sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    ptr1 = &n1, ptr2 = &n2, ptr_sum = &sum;
    *ptr_sum = *ptr1 + *ptr2;
    printf("Sum = %d\n", *ptr_sum);
}
