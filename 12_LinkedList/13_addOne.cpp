#include <iostream>
using namespace std;

/* Node structure */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Solution class */
class Solution {
  public:
  
  Node* reverse(Node*& head) {
      Node* prev = NULL;
      Node* current = head;
      
      while (current != NULL) {
          Node* forward = current->next;
          current->next = prev;
          prev = current;
          current = forward;
      }
      return prev;
  }
  
  Node* addOne(Node* head) {
      // Step 1: Reverse linked list
      head = reverse(head);
      
      // Step 2: Add one with carry
      int carry = 1;
      Node* temp = head;
      Node* temp2 = head;
      
      while (temp != NULL) {
          int sum = temp->data + carry;
          temp->data = sum % 10;
          carry = sum / 10;
          temp2 = temp;
          temp = temp->next;
      }
      
      // Step 3: If carry still remains, add a new node
      if (carry > 0) {
          Node* newNode = new Node(carry);
          temp2->next = newNode;
      }
      
      // Step 4: Reverse back to original order
      head = reverse(head);
      
      return head;
  }
};

/* Helper function to print linked list */
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data;
        if (head->next != NULL) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

/* Helper to create linked list from number input */
Node* createListFromNumber(int n) {
    if (n == 0) return new Node(0);
    Node* head = NULL;
    Node* tail = NULL;
    int digits[20];
    int count = 0;

    while (n > 0) {
        digits[count++] = n % 10;
        n /= 10;
    }

    for (int i = count - 1; i >= 0; i--) {
        Node* newNode = new Node(digits[i]);
        if (head == NULL) {
            head = newNode;
            tail = head;
        } else {
            tail->next = newNode;
            tail = tail->next;
        }
    }

    return head;
}

/* Main function to test */
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Node* head = createListFromNumber(n);

    cout << "Original List: ";
    printList(head);

    Solution ob;
    head = ob.addOne(head);

    cout << "After Adding One: ";
    printList(head);

    return 0;
}
