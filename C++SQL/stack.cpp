#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<string> s;
 s.push("singh");
 s.push("raj");
 s.push("Akhand");
 cout<< "top element"<<s.top()<<endl;
 s.pop();
  cout<< "top element"<<s.top()<<endl;

}