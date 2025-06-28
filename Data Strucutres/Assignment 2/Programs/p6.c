#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 1000
typedef struct Stack {char arr[MAX]; int top;} Stack;
void push(Stack* s, char ch) {s->arr[++s->top] = ch;}
char pop(Stack* s) {return s->top == -1 ? '\0' : s->arr[s->top--];}
char peek(Stack* s) {return s->top == -1 ? '\0' : s->arr[s->top];}
int precedence(char op) {return op == '+' || op == '-' ? 1 : op == '*' || op == '/' ? 2 : 0;}
int main() {
printf("SHIV ARORA\n");
Stack s; s.top = -1;
char infix[MAX], postfix[MAX];
printf("Enter infix: ");
fgets(infix, MAX, stdin);
int j = 0;
for (int i = 0; infix[i]; i++) {
if (isalnum(infix[i])) postfix[j++] = infix[i];
else if (infix[i] == '(') push(&s, infix[i]);
else if (infix[i] == ')') {
while (peek(&s) != '(') postfix[j++] = pop(&s);
pop(&s);
} else {
while (s.top != -1 && precedence(peek(&s)) >= precedence(infix[i]))
postfix[j++] = pop(&s);
push(&s, infix[i]);
}
}
while (s.top != -1) postfix[j++] = pop(&s);
postfix[j] = '\0';
printf("Postfix: %s\n", postfix);
return 0;
}
