#include<iostream>
#include<climits>
using namespace std;
int max(int arr[],int size){
    int maxi = INT_MIN ;
for(int i=0;i<5;i++){
    // if(arr[i]>max){
    //     max=arr[i];
    // }

    //we can use this insted of commented part
     
maxi= max(maxi,arr[i]);
}
return maxi;
}
int min(int arr[],int size){
    int min = INT_MAX ;
for(int i=0;i<5;i++){
    if(arr[i]<min){
        min=arr[i];
    }
}
return min;
}
int main(){
    int size;
  cout<<"enter a number";
  cin>>size;  
int arr[100];
 cout<<"enter element of array";
for(int i=0;i<5;i++){
cin>>arr[i];
}
 cout<<"max value="<< max(arr,size)<<endl; 
  cout<<"min value="<< min(arr,size)<<endl;
}