// enter a number:5 
// enter a number whose ascii value want:65
//  A A A A A
//  B B B B B
//  C C C C C
//  D D D D D
//  E E E E E
#include<iostream>
using namespace std;
int main(){
int n,number;
cout<< "enter a number:" ;
cin>> n ;
cout<< "enter a number whose ascii value want:";
cin>> number;
for(int i=0;i<n;i++){
    char k=char(number);
    for(int j=0;j<n;j++){
        cout<<" "<< k ;
    }cout<<endl;
    number++;
}
}