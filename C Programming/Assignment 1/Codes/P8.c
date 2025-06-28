#include <stdio.h>
int main() {
 char ch;
printf("SHIV ARORA\n");
 printf("Enter an alphabet:\n ");
 scanf(" %c", &ch);
 if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
 if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' ||
 ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' ||
 ch == 'U' || ch == 'u') {
 printf("%c is a vowel.\n", ch);
 } else printf("%c is a consonant.\n", ch);
 } else printf("%c is not an alphabet.\n", ch);
 return 0;
}