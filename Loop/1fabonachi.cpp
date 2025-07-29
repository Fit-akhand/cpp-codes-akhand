#include<iostream>

using namespace std;
int main (){
  int a = 0 ;
  int b = 1 ;
  int n ;
  cout << "no of element in fabonacci series : ";
  cin >> n ;
  for(int i =1 ; i <= n ; i++){
    if(i==1){
        cout << a << " " ;
    }
    else if(i==2){
        cout << b << " ";
    }
    else{
        int c= a+b;
        a=b;
        b=c;
        cout << c << " ";
    }
  }
}