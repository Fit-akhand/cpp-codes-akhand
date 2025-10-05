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

// void MidNode(Node *&head){
//     Node *slow = head;
//     Node *fast = head;
//     int count =0;
//     while(fast != NULL){
//         fast = fast ->next;
//         count++;
//         if(count%2==0){
//             slow = slow->next;
//         }
//     }
//     cout << "Middle of Linked List is :" << slow->data;
// }

Node *MidNode(Node*&head){
       Node *slow = head;
       Node *fast = head;
       // agar fast ke pass do step chalne ki jagaha hai tabhi mai slow ko ek step chalaunga
       while(fast != NULL && fast->next != NULL){
        fast = fast ->next->next;
        slow = slow->next; 
       }

       return slow;
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
    Node *sixth = new Node(60);


    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;

    Node *head = first;
    Node *tail = fifth;

    print(head);
    
    Node *slow = head;
    Node *fast = head;

    Node* ans = MidNode(head);

    cout << "Middle of Linked List is : " << ans->data;

    return 0;
}
