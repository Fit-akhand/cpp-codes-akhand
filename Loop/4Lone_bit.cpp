#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>> n;
    int sum=0;
    for(int i=0;i<=32;i++){
        if(n&1){
            sum++;
        }
        n=n>>1;
    }
    cout<<" no of one bit = "<< sum ;
}