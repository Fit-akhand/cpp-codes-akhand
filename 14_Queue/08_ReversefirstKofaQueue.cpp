#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Helper function: reverses queue in groups of k
    void reverseGroup(queue<int> &q, int k, int remaining) {
        if (remaining >= k) {
            stack<int> s;

            // Step 1: Push first k elements into stack (reverse order)
            for (int i = 0; i < k; i++) {
                s.push(q.front());
                q.pop();
            }

            // Step 2: Push them back to queue (reversed group)
            while (!s.empty()) {
                q.push(s.top());
                s.pop();
            }

            // Step 3: Recursively handle remaining elements
            reverseGroup(q, k, remaining - k);
        } 
        else {
            // If remaining elements < k → keep them as is
            for (int i = 0; i < remaining; i++) {
                q.push(q.front());
                q.pop();
            }
        }
    }

    // Main function to reverse in groups of K
    queue<int> reverseFirstK(queue<int> q, int k) {
        reverseGroup(q, k, q.size());
        return q;
    }
};

int main() {
    Solution sol;
    queue<int> q;

    // Example input
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int k = 3;

    for (int x : arr) q.push(x);

    cout << "Original Queue: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    queue<int> result = sol.reverseFirstK(q, k);

    cout << "After reversing in groups of " << k << ": ";
    while (!result.empty()) {
        cout << result.front() << " ";
        result.pop();
    }
    cout << endl;

    return 0;
}
