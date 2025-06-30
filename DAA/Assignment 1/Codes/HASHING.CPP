#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#define TABLE_SIZE 10
class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = NULL;
    }
};
class HashTable {
private:
    Node* table[TABLE_SIZE];
    int hashFunction(int key) {
        return key % TABLE_SIZE;
    }
public:
    HashTable() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            table[i] = NULL;
        }
    }
    void insert(int value) {
        int index = hashFunction(value);
        Node* newNode = new Node(value);
        newNode->next = table[index];
        table[index] = newNode;
    }
    void deleteValue(int value) {
        int index = hashFunction(value);
        Node* temp = table[index];
        Node* prev = NULL;

        while (temp != NULL && temp->data != value) {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL) return;
        if (prev == NULL) {
            table[index] = temp->next;
        } else {
            prev->next = temp->next;
        }
        delete temp;
    }
    int search(int value) {
	int index = hashFunction(value);
	Node* temp = table[index];
	while (temp != NULL) {
	    if (temp->data == value) return 1;
	    temp = temp->next;
	}
	return 0;
    }
    void display() {
        cout << endl;
        for (int i = 0; i < TABLE_SIZE; i++) {
            cout << i << " -> ";
            Node* temp = table[i];
            while (temp != NULL) {
                cout << temp->data << " -> ";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }
    }
};
void main() {
    clrscr();
    cout << "Shiv Arora"<< endl;
    HashTable ht;
    int choice, value;
    cout << "\n1. Insert\n2. Delete\n3. Search\n4. Display\n5. Exit\n";
    while (1) {
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                ht.insert(value);
                break;
            case 2:
                cout << "Enter value to delete: ";
                cin >> value;
                ht.deleteValue(value);
                break;
            case 3:
                cout << "Enter value to search: ";
                cin >> value;
                if (ht.search(value))
                    cout << "Found" << endl;
                else
                    cout << "Not Found" << endl;
                break;
            case 4:
                ht.display();
                break;
            case 5:
                exit(0);
            default:
                cout << "Invalid Choice" << endl;
        }
    }
    getch();
}