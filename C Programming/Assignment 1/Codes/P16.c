#include <stdio.h>
#include <math.h>
int main() {
int a, b, c;
 float discriminant, root1, root2;
printf("SHIV ARORA\n");
 printf("Enter coefficients a, b, c: \n");
 scanf("%d %d %d", &a, &b, &c);
 discriminant = b * b - 4 * a * c;
 if (discriminant > 0) {
 root1 = (-b + sqrt(discriminant)) / (2 * a);
 root2 = (-b - sqrt(discriminant)) / (2 * a);
 printf("Roots are real and different: %.2f, %.2f\n", root1, root2);
 } else if (discriminant == 0) {
 root1 = -b / (2 * a);
 printf("Roots are real and the same: %.2f\n", root1);
 } else printf("No real roots exist.\n");
 return 0;
}