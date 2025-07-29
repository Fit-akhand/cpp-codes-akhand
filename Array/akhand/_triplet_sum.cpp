#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter a number";
    cin>>a;
    int arr[10];
    cout<<"enter a array";
    for(int i=0;i<a;i++){
cin>>arr[i];
    }
    int k;
    cout <<"give number you want pair sum";
    cin>>k;
    for(int i=0;i<a;i++){
        for(int j=i+1;j<a;j++){
            for(int l=1+j;l<a;l++){
            if(k==arr[i]+arr[j]+arr[l]){
            cout<< arr[i] <<','<< arr[j]<<","<<arr[l]<<"are triplet sum"<<endl;
            }
        }
    }
}
}