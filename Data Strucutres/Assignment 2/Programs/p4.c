#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 1000
typedef struct Stack {
	int arr[MAX];
	int top;
} Stack;
void initStack(Stack* stack) {
	stack->top = -1;
}
bool push(Stack* stack, int value) {
	if (stack->top == MAX - 1) {
	printf("Stack overflow\n");
	return false;
	}
	stack->arr[++stack->top] = value;
	return true;
}
int pop(Stack* stack) {
	if (stack->top == -1) {
	printf("Stack underflow\n");
	return -1;
	}
	return stack->arr[stack->top--];
}
void display(Stack* stack) {
	if (stack->top == -1) {
	printf("Stack is empty\n");
	return;
	}
	printf("{ ");
	for (int i = stack->top; i >= 0; i--) {
	printf("%d ", stack->arr[i]);
	}
	printf("}\n");
	}
void  main() {
	Stack stack;
	initStack(&stack);
	int choice, value;
	printf("\nChoose an operation:\n");
	printf("1. Push\t2. Pop\t3. Display\t4. Exit\n");
	while (true) {
	printf("Enter your choice: ");
	scanf("%d", &choice);
	switch (choice) {
		case 1:
			printf("Enter value to push: ");
			scanf("%d", &value);
			push(&stack, value);
			break;
		case 2:
			value = pop(&stack);
			if (value != -1) {
			printf("Popped: %d\n", value);
			}
		break;
		case 3:
			display(&stack);
			break;
		case 4:
			return 0;
		default:
			printf("Invalid choice. Please try again.\n");
			break;
		}
	}
}
