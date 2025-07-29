#include<iostream>
using namespace std;
int unique(int arr[],int a){
int ans=0;
   for(int i=0;i<a;i++){
      ans=ans^arr[i];
   }
   return ans;
}
int main(){
    int a;
    cout<<"enter a number";
    cin>>a;
    int arr[30];
    cout<<"enter element in array";
    for(int i=0;i<a;i++){
        cin>> arr[i];
    }
    cout<< unique(arr,a)<< "is unique element";
   
}