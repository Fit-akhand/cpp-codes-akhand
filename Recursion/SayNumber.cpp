#include<iostream>
using namespace std;

int say(int n,string arr[]){
  if (n==0) return 0;
  int a=n%10;
  
  n=n/10;
  
  say(n,arr);
cout<< arr[a]<<" ";
}
int main(){
    int n;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout<< "enter a number->";
    cin>> n;
    say(n,arr);
}