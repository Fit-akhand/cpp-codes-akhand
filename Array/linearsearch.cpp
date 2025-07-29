#include<iostream>
using namespace std;

int search(int arr[],int a,int n){
for(int i=0;i<a;i++){
    if(arr[i]==n){
        return 1;
    }
     }
     return 0;
     
}
int main(){
    int arr[100];
    int a;
    cout<<"enter a element ";
    cin>> a ;
    cout<<"enter element of an array:";
    for(int i=0;i<a;i++){
    cin>>arr[i];
    }
    int n;
    cout<<"enter element you want to find";
    cin>>n;
    int K=search(arr,a,n);
    if(K){
        cout<< n <<"is present";
    }
    else{
    cout<< n <<"is not present";
    }

}