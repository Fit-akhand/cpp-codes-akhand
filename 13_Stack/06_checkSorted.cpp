#include<iostream>
#include<stack>
using namespace std;

bool checkSorted(stack<int> s,int top =-1){
    //base case
    if (s.empty()) return true;

    // 1 case solve karna hai
    if(top > s.top()){
        return false;
    }
    top = s.top();
    s.pop();
    return checkSorted(s,top);
    
}

int main(){

    stack<int> s;
    s.push(60);
    s.push(50);
    s.push(40);
    s.push(30);
    s.push(20);
    s.push(10);

    int totalsize = s.size();
    int count =0;
    bool ans = checkSorted(s);
    if(ans){
        cout <<" Stack is Sorted " << endl;
    }
    else{
        cout << " Stack is Unsorted " << endl;
    }
    
    return 0;
}