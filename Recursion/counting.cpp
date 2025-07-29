#include<iostream>
using namespace std;

int count(int a){
    if(a==0) return 0;
     
    count(a-1);
    cout<< a<<" ";
}

int main(){
    int n;
    cout<< "enter a number->";
    cin>> n;
    count(n);
}