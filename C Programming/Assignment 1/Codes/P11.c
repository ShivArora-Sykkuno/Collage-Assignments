#include <stdio.h>
int main() {
 int weekNumber;
printf("SHIV ARORA\n");
 printf("Enter week number: \n");
 scanf("%d", &weekNumber);
 if (weekNumber == 1) printf("Day: Sunday\n");
 else if (weekNumber == 2) printf("Day: Monday\n");
 else if (weekNumber == 3)printf("Day: Tuesday\n");
 else if (weekNumber == 4) printf("Day: Wednesday\n");
 else if (weekNumber == 5) printf("Day: Thursday\n");
 else if (weekNumber == 6) printf("Day: Friday\n");
 else if (weekNumber == 7) printf("Day: Saturday\n");
 else printf("Invalid week number.\n");
 return 0;
}
