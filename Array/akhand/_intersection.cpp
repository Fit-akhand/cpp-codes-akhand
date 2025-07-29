#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter a number";
    cin>>a;
    int arr1[30];
    cout<<"enter element in 1st array";
    for(int i=0;i<a;i++){
        cin>> arr1[i];
    }
    //---------------
    int arr2[30];
    cout<<"enter element in 2nd array";
    for(int i=0;i<a;i++){
        cin>> arr2[i];
    }
    //----------------
    for(int i=0;i<a;i++){
for(int j=0;j<a;j++){
    if(arr1[i]==arr2[j]){
       cout<< arr2[j] <<"is present in both array"<<endl;

    }
} 
    }
}