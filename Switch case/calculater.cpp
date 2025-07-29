#include<iostream>
using namespace std;
int main(){
    cout<<"enter a number"<<endl;
    int a,b;
    cin>> a >> b ;
    cout<<"enter a character"<<endl;
    char ch;
    cin >>ch;
    switch (ch)
    {
    case '+': cout<< a+b;
        break;
        case '-':  cout<<a-b;
        break;
        case '*':  cout<<a*b;
        break;
        case '/':  cout<<a/b;
        break;
    
    default: cout<<"character not match";
        break;
    }
      

    return 0 ;
}