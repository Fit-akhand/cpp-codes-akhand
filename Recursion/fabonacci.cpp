#include<iostream>
using namespace std;

int fib(int n){

    if(n==0 ) return 0;
    if(n==1)  return 1;
    int a= fib(n-1);
    int b=  fib(n-2);
 int ans =a+b;
 return ans;
}

int main(){
    int a=0,b=1;
    int n=5;
    cin>>n ;
  cout<< fib(n);
}