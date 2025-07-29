#include<iostream>
using namespace std;
int peak(int arr[],int n){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
   while(s<e){
    if(arr[s]<arr[s+1]){
        s=mid+1;
    }
    else {
        e=mid;
    }
     mid=s+(e-s)/2;
   }
   return s;
}
int main(){
    
    int a,n;
    int arr[100];
    cout<<"enter size of array";
cin>>n;
cout<<"enter element of array";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
// cout<<"enter key element";
// cin>>a;

cout<<"peak element is:"<< peak(arr,n);
}