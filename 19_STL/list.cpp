#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// insert at beginning
void insertAtHead(Node*& head, int val) {
    Node* newNode = new Node{val, head};
    head = newNode;
}

// insert at end
void insertAtEnd(Node*& head, int val) {
    Node* newNode = new Node{val, NULL};

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

// delete first occurrence
void deleteNode(Node*& head, int val) {
    if (head == NULL) return;

    if (head->data == val) {
        Node* t = head;
        head = head->next;
        delete t;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL && temp->next->data != val) {
        temp = temp->next;
    }

    if (temp->next != NULL) {
        Node* t = temp->next;
        temp->next = t->next;
        delete t;
    }
}

// print list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// length
int length(Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

int main() {

    Node* head = NULL;

    insertAtHead(head, 10);
    insertAtHead(head, 5);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    printList(head);

    deleteNode(head, 20);
    printList(head);

    cout << "Length: " << length(head) << endl;

    return 0;
}