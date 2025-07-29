#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter a number : ";
    cin>>a;
    int arr[30];
    cout<<"enter element in array : ";
    for(int i=0;i<a;i++){
        cin>> arr[i];
    }
    for(int i=0;i<a;i++){
for(int j=i+1;j<a;j++){
    if(arr[i]==arr[j]){
       cout<< arr[j] << "is present twice" ;
    }
} 
    }
}