#include<iostream>
using namespace std;

int fab(int n){
  if(n == 1) return 0;
    if(n == 2) return 1;
    return fab(n-1) + fab(n-2); 
}

int main(){
  int n ;
  cout << "enter which term of in fabonachi series ->";
  cin >> n;

  cout << fab(n);

}