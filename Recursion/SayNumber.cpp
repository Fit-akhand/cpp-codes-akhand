#include<iostream>
using namespace std;

void saynumber(int n,string arr[]){
  if(n==0){
    return ;
  }
  int digit = n%10;
  n = n/10;
  saynumber(n,arr);
  cout << arr[digit] << endl;
}

int main(){
  int n;
  cout << "enter number";
  cin >> n;

  string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
  saynumber(n,arr);
  }