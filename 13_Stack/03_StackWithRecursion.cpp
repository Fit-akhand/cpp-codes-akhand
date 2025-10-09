#include<iostream>
#include<stack>
using namespace std;

void insertAtButtom(stack<int> &s,int value){
    if(s.empty()){
        s.push(value);
        return;
    }

    int topval = s.top();
    s.pop();
    insertAtButtom(s,value);
    s.push(topval);
}


int main(){

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    int value = 101;

    insertAtButtom(s,value);

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    } 
    cout << endl;   
    
    return 0;
}