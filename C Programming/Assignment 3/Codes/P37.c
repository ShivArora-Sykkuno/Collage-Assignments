#include <stdio.h>
#include <string.h>
void main() {
    printf("SHIV ARORA\n");
    char b[100];
    printf("Enter a binary number: ");
    scanf("%s", b);
    for (int i = 0; i < strlen(b); i++) {
        if (b[i] == '0') printf("1");
        else printf("0");
        } 
}
