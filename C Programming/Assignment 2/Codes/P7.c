#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, dis, r1, r2;
	printf("SHIV ARORA\n");
    printf("Enter three numbers \n");
    scanf("%f %f %f", &a, &b, &c);
    dis = b * b - 4 * a * c;
    switch ((dis > 0) * 1) {
        case 1:
            r1 = (-b + sqrt(dis)) / (2 * a);
            r2 = (-b - sqrt(dis)) / (2 * a);
            printf("Root 1 = %.2f\n", r1);
            printf("Root 2 = %.2f\n", r2);
            break;
        case 0:
            if (dis == 0) {
                r1 = r2 = -b / (2 * a);
                printf("Root 1 = Root 2 = %.2f\n", r1);
            }
            break;
    }
	if (dis < 0) printf("No real roots exist\n");
    return 0;
}
