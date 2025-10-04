#include<iostream>
using namespace std;

class Node{
public:
    Node *prev;
    int data;
    Node *next; 

    Node(int value){
        data = value;
        prev = NULL;
        next = NULL;
    }
};

int getSize(Node *head){
    int count = 0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
}

void InsertAtPosition(int value,int position,Node *&head,Node*&tail){
    if(head == NULL && tail == NULL){
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
        return;
    }

    if(position == 1){
        Node *newNode = new Node(value);    
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    }

    int size = getSize(head);

    if(position == size + 1){
       Node *newNode = new Node(value);
       tail->next = newNode;
       newNode->prev = tail;
       tail = newNode;
       return;
    }

    if(position > 1 && position <= size){
        Node *temp = head;
        for(int i=1; i<=position-2; i++){
            temp = temp->next;
        }

        Node *forward = temp->next;
        Node *newNode = new Node(value);

        temp->next = newNode;
        newNode->prev = temp;
        newNode->next = forward;
        forward->prev = newNode;
        return;
    }

    cout << "Invalid position!\n";
}

void DeleteAtPosition(int position, Node *&head, Node *&tail){
    if(head == NULL){
        cout << "List is empty!\n";
        return;
    }

    int size = getSize(head);

    if(position < 1 || position > size){
        cout << "Invalid position!\n";
        return;
    }

    // Delete head
    if(position == 1){
        Node *temp = head;
        head = head->next;
        if(head != NULL) head->prev = NULL;
        else tail = NULL;  // list became empty
        delete temp;
        return;
    }

    // Delete tail
    if(position == size){
        Node *temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete temp;
        return;
    }

    // Delete in middle
    Node *temp = head;
    for(int i=1; i<=position-1; i++){
        temp = temp->next;
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete temp;
}

void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main(){
    Node *head = NULL;
    Node *tail = NULL;

    InsertAtPosition(1,1,head,tail);    
    InsertAtPosition(55,2,head,tail);   
    InsertAtPosition(99,2,head,tail);   
    InsertAtPosition(0,1,head,tail);    

    cout << "Original list: ";
    print(head);  // 0->1->99->55->NULL

    DeleteAtPosition(1, head, tail); // delete head
    cout << "After deleting position 1: ";
    print(head);  // 1->99->55->NULL

    DeleteAtPosition(2, head, tail); // delete middle
    cout << "After deleting position 2: ";
    print(head);  // 1->55->NULL

    DeleteAtPosition(2, head, tail); // delete tail
    cout << "After deleting position 2: ";
    print(head);  // 1->NULL

    DeleteAtPosition(1, head, tail); // delete last remaining node
    cout << "After deleting last node: ";
    print(head);  // NULL

    return 0;
}
