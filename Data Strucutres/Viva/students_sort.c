#include<stdio.h>
#include<string.h>
#include <stdlib.h>

typedef struct Students{
    char name[100];
} Students;

// Comparison function for qsort
int compareStrings(const void *a, const void *b) {
    return strcmp(((Students*)a)->name, ((Students*)b)->name);
}

void main() {
    int n;
    printf("Enter the total number of students\n");
    scanf("%d", &n);

    Students s[n];  
    for(int i = 0; i < n; i++) {
        scanf("%s", s[i].name);
    }

     
    qsort(s, n, sizeof(Students), compareStrings);

    for(int i = 0; i < n; i++) {
        printf("Student %d: %s\n", i + 1, s[i].name);
        }
}
// int strcmp(const char *str1, const char *str2);