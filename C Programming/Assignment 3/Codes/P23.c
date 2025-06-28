#include <stdio.h>
void main() {
    int  n;
    printf("SHIV ARORA\n");
    printf("Enter the factorial ");
    scanf("%d", &n);
    int ans = 1;
    for (int i = 0; i < n; i++) {
        ans *= n-i;
    }
    printf("%d", ans);
}
