#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
};

bool hasCycle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return true;
        }
    }

    return false;
}

int main() {
    Node* head = nullptr;

    for (int i = 1; i <= 5; i++) {
        Node* newNode = new Node();
        newNode->data = i;
        newNode->next = head;
        head = newNode;
    }

    // Creating a cycle by linking the last node to the second node
    Node* lastNode = head;
    while (lastNode->next != nullptr) {
        lastNode = lastNode->next;
    }
    lastNode->next = head->next;
    
    if (hasCycle(head)) {
        cout << "Linked List has a cycle." << endl;
    } else {
        cout << "Linked List does not have a cycle." <<endl;
    }

    return 0;
}