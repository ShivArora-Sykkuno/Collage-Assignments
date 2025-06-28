#include <stdio.h>
void main() {
    int n, digit = 0;
    printf("SHIV ARORA\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    int freq[10] = {0};
    while (n != 0) {
        digit = n% 10;
        freq[digit]++;
        n /= 10;

    }
    printf("ALL Digit Frequencies:\n");
    for (digit = 0; digit < 10; digit++) {
        if(freq[digit] == 0 ) continue;
        else printf(" %d ->  (%d)\n", digit, freq[digit]);
    }
}
