#include <stdio.h>
void main() {
    printf("SHIV ARORA\n");
    int n1, n2;
    int *ptr1, *ptr2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    ptr1 = &n1;
    ptr2 = &n2;
    if (*ptr1 > *ptr2) printf("Maximum: %d\n", *ptr1);
    else printf("Maximum: %d\n", *ptr2);
}
