#include <stdio.h>
#include <math.h>
#define M_PI 3.14
typedef struct Circle {
    float radius;
}Circle;
void calculate(Circle c, float *area, float *perimeter) {
    *area = M_PI * c.radius * c.radius;
    *perimeter = 2 * M_PI * c.radius;
}
void main() {
    printf("SHIV ARORA\n");
    Circle c1, c2;
    float area1, perimeter1, area2, perimeter2;
    printf("Enter radius of circle 1: ");
    scanf("%f", &c1.radius);
    printf("Enter radius of circle 2: ");
    scanf("%f", &c2.radius);
    calculate(c1, &area1, &perimeter1);
    calculate(c2, &area2, &perimeter2);
    printf("Circle 1: Area = %.2f, Perimeter = %.2f\n", area1, perimeter1);
    printf("Circle 2: Area = %.2f, Perimeter = %.2f\n", area2, perimeter2);
}