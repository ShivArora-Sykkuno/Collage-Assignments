#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

Node *createNode(int value){
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode-> next = NULL;
    return newNode;
}

//  _________________________________________________INSERTION_____________________________________________________________
Node *insertAtEnd(Node *head, int value){
    Node* newNode = createNode(value);
    if(head == NULL)
        return newNode;
    Node *temp = head;
    while(temp->next != NULL){
        temp= temp->next;
    }
    temp->next = newNode;
    return head;
}

Node* insertAtBegin(Node* head, int value){
    Node *newNode = createNode(value);
    if(head == NULL)
        return newNode;
    newNode->next = head;
    // head = newNode;
    return newNode;
}


Node* insertAtAnyPosition(Node *head, int value, int pos){
    Node *newNode = createNode(value);
    if(head == NULL)
        return newNode;
    Node *temp= head;
    Node *prev;
    int cnt = 1;
    while(cnt != pos && temp->next != NULL){
        prev = temp;
        temp = temp->next;
        cnt+=1;
    }
    printf("%d  \n", temp->data);
    if(cnt != pos){
        printf("Not that many nodes in the linked list\n");
    }
    else{
        newNode->next = temp;
        prev->next = newNode;
    }
    return head;
}




//  _________________________________________________DELETION_____________________________________________________________
Node* deleteAtEnd(Node *head){
    if(head == NULL){
        printf("Empty List\n");
        return head;
    }
    if(head->next  == NULL){
        free(head);
        return NULL;
    }
    Node *temp = head;
    Node *prev= temp;
    while(temp->next != NULL){
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    free(temp);
    return head;
}

Node *deleteAtBegin(Node *head){
    if(head == NULL){
        printf("Empty List\n");
        return head;
    }
    Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

Node *deleteAtAnyPosition(Node *head, int pos){
    if(head == NULL){
        printf("Empty List\n");
        return head;
    }
    Node*temp = head;
    Node* prev= temp;
    int cnt =0;
    while(cnt != pos && temp->next != NULL){
        prev = temp;
        temp= temp-> next;
        cnt++;
    }
    if(cnt != pos){
        printf("Not enough nodes in linked list");
    }
    else{
        prev->next = temp->next;
        free(temp);
    }
    return head;
}

void display(Node *head){
    Node* temp = head;
    while (temp != NULL){
        printf("%d->", temp->data);
        temp= temp->next;
    }printf("(NULL)\n");
}
void main(){
    Node *head=NULL;
    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);
    head = insertAtEnd(head, 40);
    head= insertAtBegin(head, 5);
    head= insertAtAnyPosition(head, 15, 3);
    display(head);


}
/* 
Node *deleteAtAnyPosition(Node *head, int pos) {
    if (head == NULL) {
        printf("Empty List\n");
        return head;
    }

    if (pos == 0) {
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    Node *temp = head;
    Node *prev = NULL;
    int cnt = 0;
    while (temp != NULL && cnt < pos) {
        prev = temp;
        temp = temp->next;
        cnt++;
    }
    if (temp == NULL) {
        printf("Position exceeds the length of the list\n");
        return head;
    }
    prev->next = temp->next;
    free(temp);
    return head;
}
*/