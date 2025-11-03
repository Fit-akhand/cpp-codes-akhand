#include <iostream>
#include <vector>
#include <deque>
using namespace std;

class Solution {
public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        deque<int> dq;
        vector<int> ans;

        // process first window
        for (int i = 0; i < k; i++) {
            if (arr[i] < 0) {
                dq.push_back(i);
            }
        }

        // store answer for first window
        if (dq.empty()) ans.push_back(0);
        else ans.push_back(arr[dq.front()]);

        // process remaining windows
        for (int i = k; i < arr.size(); i++) {
            // remove elements that are out of this window
            if (!dq.empty() && i - dq.front() >= k) {
                dq.pop_front();
            }

            // add new element (if negative)
            if (arr[i] < 0) {
                dq.push_back(i);
            }

            // store answer
            if (dq.empty()) ans.push_back(0);
            else ans.push_back(arr[dq.front()]);
        }

        return ans;
    }
};

int main() {
    Solution sol;
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter window size k: ";
    cin >> k;

    vector<int> result = sol.firstNegInt(arr, k);

    cout << "First negative integer in each window: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
