#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void ReverseKgroup(queue<int> &q,int k,int n){\
    stack<int>st;
    for(int i=0;i<k;i++){
        st.push(q.front());
        q.pop();
        n--;
    }
    for(int i=0;i<k;i++){
        q.push(st.top());
        st.pop();
    }
    if(n>k){
        ReverseKgroup(q,k,n);
    }
    else{
        while(n!=0){
            q.push(q.front());
            q.pop();
            n--;
        }
    }
}
void Print(queue<int>&q){
    int n = q.size();
    for(int i=0;i<n;i++){
        cout<< q.front() <<" " ;
        q.pop();
    }
}

int main(){

    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    int k = 3;
    int non_reverse = q.size();
    ReverseKgroup(q,k,non_reverse);

    Print(q);

}