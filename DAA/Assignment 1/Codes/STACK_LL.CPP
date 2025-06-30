#include <iostream.h>
#include <conio.h>
#define MAX 1000

class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = NULL;
    }
};
class Stack {
private:
    Node* top;
public:
    Stack() {
        top = NULL;
    }
    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }
    void pop() {
        if (top == NULL) {
            cout << "Underflow" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }
    void peek() {
        if (top == NULL) {
            cout << "No Element Present in stack" << endl;
            return;
        }
        cout << top->data << endl;
    }
    void isEmpty() {
        if (top == NULL) {
            cout << "Is EMPTY" << endl;
        } else {
            cout << "Not Empty" << endl;
        }
    }
    void display() {
        Node* temp = top;
        while (temp != NULL) {
            cout << temp->data << "  ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main() {
    clrscr();
    cout << "Shiv Arora" << endl;
    Stack st;
    int choice, value;
    int flag = 0;
    cout << "\n1. Push\n2. Pop\n3. Peek\n4. Is Empty\n5. Exit\n6. Display" << endl;
    while (flag == 0) {
	cin >> choice;
	switch (choice) {
            case 1:
                cout << "Enter a number: ";
                cin >> value;
                st.push(value);
                break;
            case 2:
                st.pop();
                break;
            case 3:
                st.peek();
                break;
            case 4:
                st.isEmpty();
                break;
            case 5:
                flag = 1;
                break;
            case 6:
                st.display();
                break;
            default:
                cout << "Invalid Choice" << endl;
        }
    }
    getch();
    return 0;
}