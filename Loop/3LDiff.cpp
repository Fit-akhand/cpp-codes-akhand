#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>> n;
    int sum=0,mul=1;
    while(n!=0){
        int a=n%10;
        sum=a+sum;
        mul=mul*a;
        n=n/10;
    }
    cout<<"difference="<< mul-sum ;
}