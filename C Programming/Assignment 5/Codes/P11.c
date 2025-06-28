#include <stdio.h>
#include <string.h>
typedef struct Employee {
    int id;
    char name[50];
    float salary;
}Employee;
void main() {
    printf("SHIV ARORA\n");
    int size;
    printf("Enter the number of employes \n");
    scanf("%d", &size);
    Employee emp[size];
    int highestIndex = 0;
    printf("Enter details for employees\n");
    for (int i = 0; i < size; i++) {
        printf("ID, name , salary: \n");
        scanf("%d %s %f", &emp[i].id, emp[i].name, &emp[i].salary);
        if (emp[i].salary > emp[highestIndex].salary) highestIndex = i;
    }
    printf("\nEmployee with the highest salary:\n");
    printf("ID: %d\n", emp[highestIndex].id);
    printf("Name: %s\n", emp[highestIndex].name);
    printf("Salary: %.2f\n", emp[highestIndex].salary);
}