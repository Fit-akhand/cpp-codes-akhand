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
    int swaped=false;
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaped=true;
            }
        }
        if(swaped==false){
            cout<<"swaped";
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout <<" "<< arr[i];
    }
}