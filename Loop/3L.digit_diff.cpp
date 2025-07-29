// substract the product and sum of given digit.
// LEET CODE;
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a digit:";
    cin>> n;
    int sum=0,mult=1;
   while(n!=0){
    int a=n%10;
    sum=a+sum;
    mult=a*mult;
    n=n/10;
   }  
   cout<<"difference is = " << mult-sum ; 
}