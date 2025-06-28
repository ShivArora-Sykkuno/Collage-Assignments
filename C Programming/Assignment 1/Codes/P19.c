#include <stdio.h>
int main() {
 float basicSalary, hra, da, grossSalary;
printf("SHIV ARORA\n");
 printf("Enter the Basic Salary: \n");
 scanf("%f", &basicSalary);
 if (basicSalary <= 10000) {
 hra = basicSalary * 0.20;
 da = basicSalary * 0.80;
 } else if (basicSalary <= 20000) {
 hra = basicSalary * 0.25;
 da = basicSalary * 0.90;
 } else {
 hra = basicSalary * 0.30;
 da = basicSalary * 0.95;
 }
 grossSalary = basicSalary + hra + da;
 printf("Gross Salary: %.2f\n", grossSalary);
 return 0;
}