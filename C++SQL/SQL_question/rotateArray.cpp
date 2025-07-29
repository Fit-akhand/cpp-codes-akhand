#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
cout<<"enter size of array";
cin>> n;
int arr[n];
int temp[n]={0};
for(int i=0;i<n;i++){
    cin>> arr[i];
//  temp[i]=arr[i];
}
int k;
cout<<"no of places you want shift";
cin>>k;
 for(int i=0;i<n;i++){
       temp[(i+k)%n]=arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
}