#include<iostream>
using namespace std;
int main(){
int n;
cout<< "enter a number:" ;
cin>> n ;
int number=68;
for(int i=0;i<n;i++){
    int a=number;
    for(int j=0;j<=i;j++){

        char k=char(a);

        cout<<" "<< k ;
        a++;
    }cout<<endl;
    number--;
}
}