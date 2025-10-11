#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
};

void deleteNode(Node* nodeToDelete) {
    Node* temp = nodeToDelete->next;
    nodeToDelete->next = temp->next;
    delete temp;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;

    for (int i = 1; i <= 5; i++) {
        Node* newNode = new Node();
        newNode->data = i;
        if(head == nullptr){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Deleting the node with data 3
    Node* toDelete = head->next;
    deleteNode(toDelete);

    cout << "Linked List after deletion: ";
    printList(head);

    return 0;
}