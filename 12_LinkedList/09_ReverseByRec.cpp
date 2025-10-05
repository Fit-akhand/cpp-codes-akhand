#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

void reverseLL(Node *&head,Node *prev){
    
    if(head == NULL){
        head = prev;
        return;
    }

    Node *forward = head->next;
    

    Node *&current = head;

    current->next = prev;

    prev = current;
    head = forward;
    reverseLL(head,prev);
}

void print(Node *&head){
     Node *temp = head;
    cout << "Linked List: ";
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);


    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;

    Node *head = first;
    Node *tail = fifth;

    print(head);
    
    reverseLL(head,NULL);
    
    print(head);

    return 0;
}
