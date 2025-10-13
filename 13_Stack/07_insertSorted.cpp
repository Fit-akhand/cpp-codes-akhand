#include<iostream>
#include<stack>
using namespace std;

void insertedSorted(stack<int> &s,int val){
    // base case
    if(s.empty()){
        s.push(val);
        return;
    }

    if(s.top() < val){
        int topval = s.top();
        s.pop();
        insertedSorted(s,val);
        s.push(topval);
    }
    else{
        s.push(val);
    }

}

void printstack(stack<int> s){
    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }
}

int main(){

    stack<int> s;
    s.push(60);
    s.push(50);
    s.push(40);
    s.push(30);
    s.push(20);
    s.push(10);

    int val = 25;
    insertedSorted(s,val);

    printstack(s);

    return 0;
}