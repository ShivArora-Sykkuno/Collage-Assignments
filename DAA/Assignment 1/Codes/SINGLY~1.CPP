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
class LinkedList {
private:
    Node* head;
public:
    LinkedList() {
        head = NULL;
    }
    void insertAtHead(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }
    void insertAtTail(int value) {
        Node* newNode = new Node(value);
        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void deleteNode(int value) {
        if (head == NULL) return;
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL && temp->next->data != value) {
            temp = temp->next;
        }
        if (temp->next == NULL) return;
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
    void searchByValue(int value) {
        Node* temp = head;
        while (temp != NULL) {
            if (temp->data == value) {
                cout << "Value found" << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Value not found" << endl;
    }
    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
int main() {
    clrscr();
    cout << "Shiv Arora"<< endl;
    LinkedList list;
    int choice, value;
    int flag = 0;
    cout << "\n1. Insert at Head\n2. Insert at Tail\n3. Delete Node\n4. Search by Value\n5. Display\n6. Exit\n";
    while (flag == 0) {
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                list.insertAtHead(value);
                break;
            case 2:
                cout << "Enter value: ";
                cin >> value;
                list.insertAtTail(value);
                break;
            case 3:
                cout << "Enter value to delete: ";
                cin >> value;
                list.deleteNode(value);
                break;
            case 4:
                cout << "Enter value to search: ";
                cin >> value;
                list.searchByValue(value);
                break;
            case 5:
                list.display();
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