#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        // Step 1: Check if at least k nodes exist
        int count = 0;
        ListNode* temp = head;
        while (count < k && temp != NULL) {
            temp = temp->next;
            count++;
        }

        // Step 2: Reverse first k nodes if possible
        if (count == k) {
            ListNode* prev = NULL;
            ListNode* curr = head;
            ListNode* nextNode = NULL;
            int i = 0;

            while (i < k && curr != NULL) {
                nextNode = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nextNode;
                i++;
            }

            // Step 3: Recursively reverse remaining nodes
            ListNode* newHead = reverseKGroup(nextNode, k);
            head->next = newHead;

            // Return new head of this reversed group
            return prev;
        } 
        else {
            // Less than k nodes remaining → no reversal
            return head;
        }
    }
};

// Helper: print linked list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// Helper: create a linked list from an array
ListNode* createList(int arr[], int n) {
    if (n == 0) return NULL;
    ListNode* head = new ListNode(arr[0]);
    ListNode* temp = head;
    for (int i = 1; i < n; i++) {
        temp->next = new ListNode(arr[i]);
        temp = temp->next;
    }
    return head;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    ListNode* head = createList(arr, n);
    cout << "Original List: ";
    printList(head);

    Solution obj;
    head = obj.reverseKGroup(head, k);

    cout << "After reversing in groups of " << k << ": ";
    printList(head);

    return 0;
}
