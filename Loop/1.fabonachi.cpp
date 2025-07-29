#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of term you want:";
    cin>> n;
    int a=0,b=1,sum=0;
    for(int i=1;i<=n;i++){
        if(i==1){
            cout<< a<<" ";
        }
        if(i==2){
            cout<< b<<" ";
        }
        if(i>=3){
            sum=a+b;
            cout<< sum<<" ";
            a=b;
            b=sum;   
        }
    }
    
}