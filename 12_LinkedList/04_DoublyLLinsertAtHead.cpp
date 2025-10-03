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

void insertatHead(int value,Node *&head,Node *&tail){
    if(head == NULL && tail == NULL){
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else{
        Node *newNode = new Node(value);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
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

void tPrint(Node *&tail){
    Node *temp = tail;
    while(tail != NULL){
        cout << tail->data << "->";
        tail = tail ->prev;
    }
    cout << "NULL";
}

int main(){

    Node *head = NULL;
    Node *tail = NULL;

    insertatHead(10,head,tail);
    insertatHead(20,head,tail);
    insertatHead(30,head,tail);

    print(head);
    cout << endl;
    tPrint(tail);

}