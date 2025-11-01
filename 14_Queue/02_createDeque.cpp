#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int> q;

    q.push_front(53);
    q.push_front(43);
    q.push_back(33);
    q.push_back(23);

    cout << " front : " << q.front() << endl;
    
    cout << " back : " << q.back() << endl;

}