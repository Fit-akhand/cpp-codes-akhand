#include<iostream>
using namespace std;
int ncr(int n) {
  int A=n*ncr(n-1);
  return A;
}
int main(){
  int a,b;
  cout<<"enter n and c";
  cin>> a >>b ;
  int p=ncr(a);
  int q=ncr(b);
  int s=a-b;
  int r=ncr(s);
  int A=p/(q*r);
  cout<<"ncr of a and b ="<<A;
  return 0 ;
}