#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> findFirstNegative(vector<int> arr, int k)
{
    queue<int> q;
    vector<int> ans;
    // Process window
    //  adition
    //  answer

    // process remaining window
    // removal
    // adition
    // answer
    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
        {
            q.push(i);
        }
    }
    if (q.empty())
    {
        ans.push_back(0);
    }
    else
    {
        ans.push_back(arr[q.front()]);
    }

    for (int i = k; i < arr.size(); i++)
    {
        // removal
        if (!q.empty() && i - q.front() >= k)
        {
            q.pop();
        }

        // adition
        if (arr[i] < 0)
        {
            q.push(i);
        }

        // answer
        if (q.empty())
        {
            ans.push_back(0);
        }
        else
        {
            ans.push_back(arr[q.front()]);
        }
    }
    return ans;
}

void print(vector<int> ans){
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
}

int main()
{
    vector<int> arr = {1, -2, 3, 4, 5, -6, -3, 7};
    vector<int> ans;
    int k = 3;
    ans = findFirstNegative(arr, k);
    print(ans);
}