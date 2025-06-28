#include <stdio.h>
int main() {
 int amount;
 int notes2000, notes500, notes100, notes50, notes20, notes10, notes5, notes1 = 0;
printf("SHIV ARORA\n");
 printf("Enter the total amount: ");
 scanf("%d", &amount);
if (amount >= 2000) {
 notes2000 = amount / 2000;
 amount %= 2000;
 if (notes2000 > 0) printf("2000 notes: %d\n", notes2000);
 }
if (amount >= 500) {
 notes500 = amount / 500;
 amount %= 500;
 if (notes500 > 0)printf("500 notes: %d\n", notes500);
 }
 if (amount >= 100) {
 notes100 = amount / 100;
 amount %= 100;
 if (notes100 > 0) printf("100 notes: %d\n", notes100);
 }
 if (amount >= 50) {
 notes50 = amount / 50;
 amount %= 50;
 if (notes50 > 0) printf("50 notes: %d\n", notes50);
 }
 if (amount >= 20) {
 notes20 = amount / 20;
 amount %= 20;
 if (notes20 > 0) printf("20 notes: %d\n", notes20);
 }
 if (amount >= 10) {
 notes10 = amount / 10;
 amount %= 10;
 if (notes10 > 0) printf("10 notes: %d\n", notes10);
 }
 if (amount >= 5) {
 notes5 = amount / 5;
 amount %= 5;
 if (notes5 > 0) printf("5 notes: %d\n", notes5);
 }
 notes1 = amount;
 if (notes1 > 0) printf("1 notes: %d\n", notes1);
 return 0;
}
