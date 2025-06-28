#include <stdio.h>
int main() {
 int monthNumber;
printf("SHIV ARORA\n");
 printf("Enter month number \n");
 scanf("%d", &monthNumber);
 if (monthNumber == 1) printf("January has 31 days.\n");
 else if (monthNumber == 2) printf("February has 28 or 29 days \n");
 else if (monthNumber == 3) printf("March has 31 days.\n");
 else if (monthNumber == 4) printf("April has 30 days.\n");
 else if (monthNumber == 5) printf("May has 31 days.\n");
 else if (monthNumber == 6) printf("June has 30 days.\n");
 else if (monthNumber == 7) printf("July has 31 days.\n");
 else if (monthNumber == 8) printf("August has 31 days.\n");
 else if (monthNumber == 9) printf("September has 30 days.\n");
 else if (monthNumber == 10) printf("October has 31 days.\n");
 else if (monthNumber == 11) printf("November has 30 days.\n");
 else if (monthNumber == 12) printf("December has 31 days.\n");
 else printf("Invalid month number\n");
 return 0;
}
