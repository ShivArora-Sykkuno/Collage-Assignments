#include <stdio.h>
#include <stdbool.h>
#define MAX 1000
int stack[MAX];
int top = -1;
bool push(int value) {
if (top == MAX - 1) {
printf("Stack overflow\n");
return false;
}
stack[++top] = value;
return true;
}
int pop() {
if (top == -1) {
printf("Stack underflow\n");
return -1;
}
return stack[top--];
}
void display() {
if (top == -1) {
printf("Stack is empty\n");
return;
}
printf("Stack elements: ");
printf("{");
for (int i = top; i >= 0; i--) {
printf("%d ", stack[i]);
}
printf("}\n");
}
void main() {
printf("SHIV ARORA\n");
int choice, value;
while (true) {
printf("\nChoose an operation:\n");
printf("1. Push\t2. Pop\t3. Display 4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
scanf("%d", &value);
push(value);
break;
case 2:
value = pop();
if (value != -1) {
printf("Popped: %d\n", value);
}
break;
case 3:
display();
break;
case 4:
return 0;
default:
printf("Invalid choice. Please try again.\n");
break;
}
}
}