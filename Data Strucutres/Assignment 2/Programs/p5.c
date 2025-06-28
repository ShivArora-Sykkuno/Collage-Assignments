#include <stdio.h>
#include <string.h>
#define MAX 100
typedef struct Stack {
char arr[MAX];
int top;
} Stack;
void initStack(Stack* s) {s->top = -1;}
int isFull(Stack* s) {return s->top == MAX - 1;}
int isEmpty(Stack* s) {return s->top == -1;}
void push(Stack* s, char ch) {
if (!isFull(s)) s->arr[++s->top] = ch;
}
char pop(Stack* s) {
return !isEmpty(s) ? s->arr[s->top--] : '\0';
}
void reverseString(char* str) {
Stack s; initStack(&s);
for (int i = 0; str[i]; i++) push(&s, str[i]);
for (int i = 0; str[i]; i++) str[i] = pop(&s);
}
int main() {
printf("SHIV ARORA\n");
char str[MAX];
printf("Enter a string: ");
fgets(str, MAX, stdin);
str[strcspn(str, "\n")] = 0;
reverseString(str);
printf("%s\n", str);
return 0;
}