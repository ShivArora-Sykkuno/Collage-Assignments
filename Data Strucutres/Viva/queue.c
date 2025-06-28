#include<stdio.h>
#define MAX 1000


typedef struct Queue
{
    int arr[MAX];
    int rear, front;
}Queue;

void queueinit(Queue *q){
    q->rear = -1;
    q->front = -1;
}

void enqueue(Queue *q, int value){
    if(q->rear == MAX-1){
        printf("Overflow\n");
        return;
    }
    if(q->rear && q->front == -1){
        q->front += 1;
    }
    q->rear +=1;
    q->arr[q->rear] = value;
    return;
}

void dequeue(Queue *q){
    if(q->front == -1 || q->front > q->rear){
        printf("Underflow\n");
        return;
    }
    if(q->rear == q->front){
        q->rear = q->front = -1;
    }
    q->front += 1;
    return;
}

void display(Queue *q){
    if(q->rear == -1){
        printf("Empty\n");
        return;
    }
    for(int i=q->front; i<= q->rear; i++){
        printf("%d ", q->arr[i]);
    }
    return;
}


int main() {
    Queue q;
    queueinit(&q);  // Initialize the queue
    int choice, value;
    printf("\nQueue Operations Menu:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
    while(1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: // Enqueue
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(&q, value);
                break;
                
            case 2: // Dequeue
                dequeue(&q);
                break;
                
            case 3: // Display
                display(&q);
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
