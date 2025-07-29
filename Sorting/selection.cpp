#include<iostream>
#include<limits.h>

using namespace std;
int main(){
    int n,arr[1000];
    cout<<"enten no of element array";
    cin>> n;
    cout<<"enter elements of array";
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
//  for selection sort 
for(int i=0;i<n-1;i++){
    int min=i;
    for(int j=i+1;j<n;j++){
    if(arr[j]<arr[min])
        min=j;
    }
    swap(arr[i],arr[min]);
}

for(int i=0;i<n;i++){
        cout<<" "<<arr[i] ;
    }
}
