#include<iostream>
using namespace std;
int sqr(int arr[],int n){
int s=0,e=n;
int mid=s+(e-s)/2;
int ans =0;
while(s<=e){
    int sq=mid*mid;
    if(sq==n){
        return mid;
    }
    if(sq<n){
         ans=mid;
        s=mid+1;
    }
    else{
           e=mid-1;
    }
    mid=s+(e-s)/2;
}
}
int main(){
 int n,arr[100];
 cout<<"enter a number for square root";

cout<<"square root is :"<<sqr(arr,n) << endl;
}