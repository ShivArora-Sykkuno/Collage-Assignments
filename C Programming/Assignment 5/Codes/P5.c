#include <stdio.h>
typedef struct Student {
    char name[50];
    int age;
    float total_marks;
}Student;
void main() {
    printf("SHIV ARORA\n");
    Student s1, s2;
    printf("Enter details for student 1:\n");
    printf("Name, Age, Total Marks \n");
    scanf("%s %d %f", s1.name, &s1.age, &s1.total_marks);
    printf("Enter details for student 2:\n");
    printf("Name, Age, Total Marks \n");
    scanf("%s %d %f", s2.name, &s2.age, &s2.total_marks);
    printf("\nDetails of Students:\n");
    printf("Student 1: %s, Age: %d, Marks: %.2f\n", s1.name, s1.age, s1.total_marks);
    printf("Student 2: %s, Age: %d, Marks: %.2f\n", s2.name, s2.age, s2.total_marks);
    float average = (s1.total_marks + s2.total_marks) / 2;
    printf("Average Marks: %.2f\n", average);
}
