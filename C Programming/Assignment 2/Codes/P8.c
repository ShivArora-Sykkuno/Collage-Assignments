#include <stdio.h>
int main() {
    char op;
    float n1, n2, result;
    printf("SHIV ARORA\n");
    printf("Enter two numbers: \n");
    scanf("%f %f", &n1, &n2);
	printf("Enter the operator\n");
    scanf(" %c", &op);
    switch (op) {
        case '+':
            printf("%.2f\n", n1 + n2);
            break;
        case '-':
            printf("%.2f\n", n1 - n2);
            break;
        case '*':
            printf("%.2f\n", n1 * n2);
            break;
        case '/':
            printf("%.2f\n", n1 / n2);
            break;
    }
    return 0;
}
