#include<iostream>

using namespace std;
int main (){
  int n ;
  cout << "Enter a number you want to be prime : ";
  cin >> n ;

  for(int i = 2 ; i<n ; i++){
    if(n%i==0){
        cout << "Not a prime number";
        break;
    }
    else{
       cout <<"prime number" ;
       break;
    }
  }
}