#include<iostream>
using namespace std;

class Node{
    public:
        Node *prev;
        int data;
        Node *next; 

        // ctor
        Node(int value){
            data = value;
            prev = NULL;
            next = NULL;
        }
};

int getSize(Node *&head){
    Node * temp = head;
    int count=0;
    while(temp != NULL){
        count++;
        temp = temp->next;
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

    if(position == size+1){
       Node *newNode = new Node(value);
       tail->next = newNode;
       newNode->prev = tail;
       tail = newNode;
    }
    else{
        // insert postion in middle position
        Node *temp = head;

        Node *newNode = new Node(value);

        for(int i=1;i<=position-2;i++){
            temp = temp->next;
        }

        // without forward pointer
        newNode->next = temp->next;
        newNode->prev = temp;
        newNode->next->prev = newNode;
        temp->next = newNode;

        // Node *forward = temp->next;

        // temp->next = newNode;
        // newNode->prev = temp;
        // newNode->next = forward;
        // forward->prev = newNode;
        
    }    
}

void print(Node *&head){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}


int main(){

    Node *head = NULL;
    Node *tail = NULL;

    InsertAtPosition(1,1,head,tail);
    InsertAtPosition(55,2,head,tail);
    InsertAtPosition(5,2,head,tail);

    print(head);
}