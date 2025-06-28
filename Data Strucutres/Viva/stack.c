#include<stdio.h>
#define MAX 1000

typedef struct Stack  
{
    int arr[MAX];
    int top;
}Stack;

void stackinit(Stack * s){
    s->top = -1;
}

void push(Stack *s, int value){
    if (s->top == MAX-1){
        printf("Overflow\n");
        return;
    }
    s->top += 1;
    s->arr[s->top] = value;
    return;
}

void pop(Stack *s){
    if(s->top == -1){
        printf("Underflow\n");
        return;
    }
    s->top -= 1;
    return;
}

void display(Stack * s){
    if(s->top == -1){
        printf("Empty\n");
        return;
    }
    for(int i=0; i<=s->top; i++){
        printf("%d ", s->arr[i]);
    }
}
int main(){
    Stack s;
    stackinit(&s); // Initialize the stack
    int choice, value;
    
    while(1) {
        // Display menu
        printf("\nStack Operations Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        
        // Take user input for the choice
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: // Push
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(&s, value);
                break;
                
            case 2: // Pop
                pop(&s);
                break;
                
            case 3: // Display
                printf("Current stack: ");
                display(&s);
                break;
                
            case 4: // Exit
                printf("Exiting the program...\n");
                return 0; // Exit the program
                
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}