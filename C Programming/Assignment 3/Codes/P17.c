#include <stdio.h>
void main() {
    int n, rev =0;
    printf("SHIV ARORA\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    int org = n;
    while (n != 0) {
        // Moduleo gives the last digit
        //  divide gives the rest of the remaining digits
        rev = rev*10 + n%10; 
        n /= 10;    
    }
    if(org == rev)
    printf("Palindrome");
    else
    printf("Not Palindrome");
}
