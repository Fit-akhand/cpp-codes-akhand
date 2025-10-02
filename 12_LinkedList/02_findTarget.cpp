#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // ctor
    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

void InsertAtHead(int value , Node *&head , Node*&tail){
    if(head  == NULL && tail == NULL){
        //empty Linked list
        // Step 1: create new node
        Node * newNode = new Node(value);
        // Step 2: point head and tail on the new node
        head = newNode;
        tail = newNode;
    }
    else{
        //Non Empty Linked list
        // create new node
        Node * newNode = new Node(value);
        // link the new node to original linked list
        newNode->next = head;
        // update head and tail
        head = newNode;
    }
    // return the head of modified linked list
    // return head;
}

void search(int value,Node *&head){
    Node *temp = head;
    int a=0;
    while(temp != NULL){
        if(temp ->data == value){
            cout<< value << " : Found";
            a = 1;
        }
        temp = temp -> next;
    }
    if( a== 0){
        cout<< value << " : Not Found";
    }
}

int main(){

     // Enpty Linked list
    Node *head = NULL;
    Node *tail = NULL;

    InsertAtHead(10,head,tail);
    InsertAtHead(20,head,tail);
    InsertAtHead(30,head,tail);

    search(40,head);

    return 0;
}