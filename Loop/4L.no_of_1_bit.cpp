// input=0000000000010000010000001
// 1 count;
// output= 3;
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>> n;
    int a=0;
    while(n!=0){
        if(n%1==0){
            a++;
        }
        n=n/10;
   }
}