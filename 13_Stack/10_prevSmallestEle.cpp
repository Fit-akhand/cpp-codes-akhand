#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void solve(vector<int> &v,vector<int>&ans){
    stack<int> s;
    s.push(-1);
    int n = v.size();

    for(int i=0;i<n;i++){
        if(v[i] > s.top()){
            ans.push_back(s.top());
            s.push(v[i]);
        }
        else{
            while(s.top() > v[i] ){
                s.pop();
            }
            ans.push_back(s.top());
            s.push(v[i]);
        }
    }
}

void print(vector<int> ans){
    for(int i=0 ;i<ans.size();i++){
        cout<< ans[i] << " ";
    }
}

int main(){
vector<int> v;
    v.push_back(8);
    v.push_back(4);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);

    
    vector<int> ans;

    solve(v,ans);

    print(ans);

}