#include<iostream>
using namespace std;
int main(){
    int n,arr[1000];
    cout<<"enten no of element array";
    cin>> n;
    cout<<"enter elements of array";
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j>=0;j--){
            if(arr[i]>arr[j]){
            swap(arr[i],arr[i+1]);
            if(j<i){
                j++;
                i--;
            }
        }
    }
    }
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i] ;
    }
}
