#include<iostream>
using namespace std;  

int pow(int a){
    if(a==0) return 1;
     
     else return 2*pow(a-1);
}

int main(){
    int n;
    cout<< "enter a number->";
    cin>> n;
    cout <<"power->"<< pow(n);
}
