#include<iostream>
using namespace std;

int main(){
    // int a,b;
    // cout<<"enter a number";
    // cin>>a;
    int arr[10]={1,0,0,0,1,1,0,1,0,1};
//     cout<<"enter a array";
//     for(int i=0;i<a;i++){
// cin>>arr[i];
//     }

 int i=0,j=9;    
      while(i>=j){
       
        if(arr[i]==0){
            i++;
        }
        else if(arr[j]==1){
            j--;
        }

     swap(arr[i],arr[j]);
      i++;
      j--;
    }
    for(int i=0;i<10;i++){
        cout<< arr[i];
    }
}