#include <iostream.h>
#include <conio.h>
#define MAX 1000

class Stack {
private:
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int value) {
        if (top >= MAX - 1) {
            cout << "Overflow" << endl;
            return;
        }
        top++;
        arr[top] = value;
    }

    void pop() {
        if (top == -1) {
            cout << "Underflow" << endl;
            return;
        }
        top--;
    }

    void peek() {
        if (top == -1) {
            cout << "No Element Present in stack" << endl;
            return;
        }
        cout << arr[top] << endl;
    }

    void isEmpty() {
        if (top == -1) {
            cout << "Is EMPTY" << endl;
        } else {
            cout << "Not Empty" << endl;
        }
    }

    void display() {
        if (top == -1) {
            cout << "Stack is Empty" << endl;
            return;
	}
	for (int i = top; i >= 0; i--) {
	    cout << arr[i] << "  ";
	}
	cout << endl;
    }
};

int main() {
    clrscr();
    cout<< "Shiv Arora"<< endl;

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
