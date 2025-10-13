#include<iostream>
#include<stack>
using namespace std;

void printMiddleFromStack(stack<int>&s,int count,int totalsize){
    // base case
    if(count == totalsize/2){
        cout<< "Middle Element : " << s.top() << endl;
        return;
    }

    // 1 case humko solve karna hai

    int val = s.top();
    count++;
    s.pop();
    printMiddleFromStack(s,count,totalsize);
    s.push(val);

}

int main(){

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    int totalsize = s.size();

    printMiddleFromStack(s,0,totalsize);
    

    return 0;
}