#include<iostream>
using namespace std;
void array(int a){
     cout<<"enter a array"<<endl;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<a;i++){
        // cout<<" "<<arr[i] <<" ";
        sum=sum+arr[i];
    }
    cout<<"sum of all element=" <<sum;
  }
    int main(){
        int a;
    cout<<"enter a number"<<endl;
    cin>>a;
    
    array(a);
return 0;
}