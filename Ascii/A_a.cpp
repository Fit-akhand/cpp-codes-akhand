#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter a number to change  in ascii value";
    cin>> number;
    char k=static_cast<char>(number);
cout<<"ascii value of "<<number<< "is" <<" "<< k;
}