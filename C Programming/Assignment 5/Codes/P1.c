#include<stdio.h>
#include<stdlib.h>
void main() {
    printf("SHIV ARORA\n");
    int *ptr;
    ptr = (int *)malloc(sizeof(int)); 
    printf("Enter a number\n");
    scanf("%d", ptr);
    printf("Pointer = %d\n", *ptr);
    free(ptr);
}