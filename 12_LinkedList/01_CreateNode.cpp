#include <iostream>
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

void InsertAtTail(int value,Node *&head,Node *&tail){
    if(head == NULL && tail == NULL){
        //create new node
        Node *newNode = new Node(value);
        // point head and tail new node
        head = newNode;
        tail = newNode;
    }
    else{
        // create newnode
        Node *newNode = new Node(value);
        // link node at tail
        tail->next = newNode;
        // update tail
        tail = newNode;
    }
    // return head;
}

int getlengthofLinkedList(Node *&head){
    Node *temp = head;
    int a=0;
    while(temp != NULL){
        a++;
        temp = temp->next;
    }
    return a;
}


void InsertAtPoint(int value,int position,Node *&head,Node *&tail){
    
    if(position == 1){
        InsertAtHead(value,head,tail);
        return ;
    }
    
    int length = getlengthofLinkedList(head);
    
    if(position == length + 1){
        InsertAtTail(value,head,tail);
        return;
    }
    else{
        Node *newnode = new Node(value);
        Node *temp = head;
        for(int i=1;i < position-2;i++){
            temp = temp ->next;
        }  
        newnode->next = temp->next;
        temp->next = newnode;
    }


}

void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->data << "=>";
        temp = temp->next;
    }
}

int main()
{
    // Enpty Linked list
    Node *head = NULL;
    Node *tail = NULL;

    InsertAtHead(10,head,tail);
    InsertAtHead(20,head,tail);
    InsertAtHead(30,head,tail);

    InsertAtPoint(500,3,head,tail);

    InsertAtTail(40,head,tail);
    
    print(head);

    return 0;
}