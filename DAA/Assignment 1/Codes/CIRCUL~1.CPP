#include <iostream.h>
#include <conio.h>
#define MAX 1000
class CircularQueue {
private:
    int front, rear;
    int queue[MAX];
public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }
    void enqueue(int value) {
        if ((rear + 1) % MAX == front) {
            cout << "Overflow" << endl;
            return;
        }
        if (front == -1) {
            front = 0;
        }
        rear = (rear + 1) % MAX;
        queue[rear] = value;
    }
    void dequeue() {
        if (front == -1) {
            cout << "Underflow" << endl;
            return;
        }
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % MAX;
        }
    }
    void frontElement() {
        if (front == -1) {
            cout << "No Element Present in queue" << endl;
            return;
        }
        cout << queue[front] << endl;
    }
    void isEmpty() {
        if (front == -1) {
            cout << "Is EMPTY" << endl;
        } else {
            cout << "Not Empty" << endl;
        }
    }
    void display() {
        if (front == -1) {
            cout << "Queue is Empty" << endl;
            return;
        }
        for (int i = front; ; i = (i + 1) % MAX) {
            cout << queue[i] << "  ";
            if (i == rear) break;
        }
        cout << endl;
    }
};
void main() {
    clrscr();
    cout << "Shiv Arora"<< endl;
    CircularQueue q;
    int choice, value;
    int flag = 0;
    cout << "\n1. Enqueue\n2. Dequeue\n3. Front\n4. Is_Empty\n5. Display\n6. Exit" << endl;
    while (flag == 0) {
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter a number: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.frontElement();
                break;
            case 4:
                q.isEmpty();
                break;
            case 5:
                q.display();
                break;
            case 6:
                flag = 1;
                break;
            default:
                cout << "Invalid Choice" << endl;
        }
    }
    getch();
}