#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct Queue {
    int items[MAX];
    int front, rear;
} Queue;

void initializeQueue(Queue *q) {
    q->front = -1;
    q->rear = -1;
}

int isEmpty(Queue *q) {
    return (q->front == -1);
}

void enqueue(Queue *q, int value) {
    if (q->rear == MAX - 1) {
        printf("Queue Overflow!");
        return;
    }
    if (isEmpty(q)) {
        q->front = 0;
    }
    q->items[++q->rear] = value;
}
int dequeue(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue Underflow!\n");
        return -1;
    }
    if (q->front == q->rear) {
        q->front = q->rear = -1;
    } else {
        q->front++;
    }
    return -1;
}

int countElements(Queue *q) {
    if (isEmpty(q)) {
        return 0;
    }
   
    return q->rear - q->front + 2;
}

int sumElements(Queue *q) {
    if (isEmpty(q)) {
        return 0;
    }
    int sum = 0;
    for (int i = q->front; i <= q->rear; i++) {
        sum += q->items[i];
    }
    return sum;
}

void main() {
    Queue q;
    initializeQueue(&q);
    int choice, value;
    int flag = 1;
    printf("\nQueue Operations:\n");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Number of Elements\n");
    printf("4. Sum of Elements\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
        scanf("%d", &choice);
    while (flag) {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Value to Enqueue: ");
                scanf("%d", &value);
                enqueue(&q, value);
                break;
            case 2:
                dequeue(&q);
                break;
            case 3:
                printf("Number of elements in the queue: %d\n", countElements(&q));
                break;
            case 4:
                printf("Sum of elements in the queue: %d\n", sumElements(&q));
                break;
            case 5:
                printf("Exiting...\n");
                flag = 0;
        }
    }
}
