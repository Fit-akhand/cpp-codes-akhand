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

Node *MidNode(Node*&head){
       Node *slow = head;
       Node *fast = head;
       while(fast != NULL && fast->next != NULL){
        fast = fast ->next->next;
        slow = slow->next; 
       }
       return slow;
}

Node *reverseLL(Node *&head,Node *prev){
    
    if(head == NULL){
        return prev;
    }

    Node *forward = head->next;

    Node *&current = head;

    current->next = prev;

    prev = current;
    head = forward;
    return reverseLL(head,prev);
}

int getSize(Node *head){
    int count = 0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
}

bool palindromre(Node *&head){
    // find length
    int length = getSize(head);
    // find mid
    Node *mid = MidNode(head);
    // update mid as per even/odd length
    if(length % 2 != 0){
        mid = mid->next;
    }

    // reverse starting from mid node
    Node * head2= reverseLL(mid,NULL);

    Node *temp1 = head;
    Node *temp2 = head2;
    // compare and return and false
    while(temp2!=NULL){
        if(temp1->data == temp2->data){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        else{
            return false;
        }
        return true;
    }
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
    Node *fourth = new Node(30);
    Node *fifth = new Node(20);
    Node *sixth = new Node(10);


    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;

    Node *head = first;
    Node *tail = sixth;

    Node *mid = MidNode(head);

    print(head);
    
    cout << "is palindrome : " << palindromre(head);

    return 0;
}
