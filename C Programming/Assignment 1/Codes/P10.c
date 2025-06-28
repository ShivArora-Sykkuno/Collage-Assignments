#include <stdio.h>
int main() {
 char ch;
printf("SHIV ARORA\n");
 printf("Enter a character: \n");
 scanf(" %c", &ch);
 if (ch >= 'A' && ch <= 'Z') printf("%c is an uppercase alphabet.\n", ch);
else printf("%c is a lowercase alphabet.\n", ch);
 return 0;
}