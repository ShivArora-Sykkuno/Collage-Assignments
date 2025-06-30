#include <iostream.h>
#include <conio.h>
#define MAX 1000
class Queue {
private:
    int front, rear;
    int queue[MAX];
public:
    Queue() {
        front = -1;
        rear = -1;
    }
    void enqueue(int value) {
        if (rear == MAX - 1) {
            cout << "Overflow" << endl;
            return;
        }
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = value;
    }
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Underflow" << endl;
            return;
        }
        front++;
    }
    void frontElement() {
        if (front == -1 || front > rear) {
            cout << "No Element Present in queue" << endl;
            return;
        }
        cout << queue[front] << endl;
    }
    void isEmpty() {
        if (front == -1 || front > rear) {
            cout << "Is EMPTY" << endl;
        } else {
            cout << "Not Empty" << endl;
        }
    }
    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is Empty" << endl;
            return;
        }
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << "  ";
        }
        cout << endl;
    }
};
int main() {
    Queue q;
    int choice, value;
    int flag = 0;
    clrscr();
    cout << "Shiv Arora"<< endl;
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
    return 0;
}
