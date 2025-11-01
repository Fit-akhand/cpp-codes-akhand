#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<int> q;

    q.push(53);
    q.push(43);
    q.push(33);
    q.push(23);

    cout << " front : " << q.front() << endl;
    
    cout << " back : " << q.back() << endl;

}