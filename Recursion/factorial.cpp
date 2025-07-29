#include<iostream>
using namespace std;
int fact(int a){
    if(a==1) return 1;
     
     else return a*fact(a-1);
}

int main(){
    int n;
    cout<< "enter a number->";
    cin>> n;
    cout <<"factorial->"<<fact(n);
}
