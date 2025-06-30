#include <iostream.h>
#include <conio.h>
#include<stddef.h>
#include <stdlib.h>
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
	data = value;
	left = right = NULL;
    }
};
class BST {
private:
    Node* root;
    Node* insert(Node* node, int value) {
	if (node == NULL) {
	    return new Node(value);
	}
	if (value < node->data) {
	    node->left = insert(node->left, value);
	} else {
	    node->right = insert(node->right, value);
	}
	return node;
    }
    Node* findMin(Node* node) {
	while (node->left != NULL) {
	    node = node->left;
	}
	return node;
    }
    Node* deleteNode(Node* node, int value) {
	if (node == NULL) return node;
	if (value < node->data) {
	    node->left = deleteNode(node->left, value);
	} else if (value > node->data) {
	    node->right = deleteNode(node->right, value);
	} else {
	    if (node->left == NULL) {
		Node* temp = node->right;
		delete node;
		return temp;
	    } else if (node->right == NULL) {
		Node* temp = node->left;
		delete node;
		return temp;
	    }
	    Node* temp = findMin(node->right);
	    node->data = temp->data;
	    node->right = deleteNode(node->right, temp->data);
	}
	return node;
    }
    Node* search(Node* node, int value) {
	if (node == NULL || node->data == value) {
	    return node;
	}
	if (value < node->data) {
	    return search(node->left, value);
	}
	return search(node->right, value);
    }
    void inorder(Node* node) {
	if (node != NULL) {
	    inorder(node->left);
	    cout << node->data << " ";
	    inorder(node->right);
	}
    }
    void preorder(Node* node) {
	if (node != NULL) {
	    cout << node->data << " ";
	    preorder(node->left);
	    preorder(node->right);
	}
    }
    void postorder(Node* node) {
	if (node != NULL) {
	    postorder(node->left);
	    postorder(node->right);
	    cout << node->data << " ";
	}
    }
public:
    BST() {
	root = NULL;
    }
    void insert(int value) {
	root = insert(root, value);
    }
    void deleteNode(int value) {
	root = deleteNode(root, value);
    }
    int search(int value) {
	if(search(root, value) != NULL){
		return 1;
	}
	return 0;
    }
    void inorder() {
        inorder(root);
        cout << endl;
    }
    void preorder() {
        preorder(root);
        cout << endl;
    }
    void postorder() {
        postorder(root);
        cout << endl;
    }
};
void main() {
    clrscr();
    cout << "Shiv Arora"<< endl;
    BST bst;
    int choice, value;
    cout << "\n1. Insert\n2. Delete\n3. Search\n4. Inorder\n5. Preorder\n6. Postorder\n7. Exit\n";
    while (1) {
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                bst.insert(value);
                break;
            case 2:
                cout << "Enter value to delete: ";
                cin >> value;
                bst.deleteNode(value);
                break;
            case 3:
                cout << "Enter value to search: ";
                cin >> value;
                if (bst.search(value))
                    cout << "Found" << endl;
                else
                    cout << "Not Found" << endl;
                break;
            case 4:
                bst.inorder();
                break;
            case 5:
                bst.preorder();
                break;
            case 6:
                bst.postorder();
                break;
            case 7:
                exit(0);
            default:
                cout << "Invalid Choice" << endl;
        }
    }
    getch();
}
