#include <stdio.h>
#include <string.h>
void main() {
    printf("SHIV ARORA\n");
    char b[100];
    int carry = 1;
    printf("Enter a binary number: ");
    scanf("%s", b);
    for (int i = strlen(b) - 1; i >= 0; i--) {
        if (b[i] == '0' && carry == 1) {
            b[i] = '1';
            carry = 0;
            break;
        } else if (b[i] == '1' && carry == 1) b[i] = '0'; 
    }
    if (carry == 1) printf("Two's complement cannot be represented.\n");
    else printf("%s\n", b);
}
