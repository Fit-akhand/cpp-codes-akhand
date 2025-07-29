#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a prime number:";
    cin>> n;
    int a=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            a=1;
        }
    }
    if(a==1){
        cout<<"not a prime number";
    }
    else cout<<"prime number";
}