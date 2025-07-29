#include<iostream>
using namespace std;
int pivot(int arr[],int n){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
    }
    int find_element(int arr[],int a,int i,int j){
    int s=i,e=j;
    // cout<<"before while"<<arr[0]<<" "<<arr[j];
    int mid=i+(j-i)/2;
     while(i<=j){
        
        if(arr[mid]==a){
            return mid;
        }
        if(arr[mid]<a){
            i=mid+1;
        }
        else{
            j=mid-1;
        }
      mid=i+(i+j)/2;
     }
     cout<<"not present";
}

    int binary(int arr[],int n,int a,int s){

     if(arr[s]<=a&&a<=arr[n-1]){
        cout<<"call if function"<<endl;
       return find_element(arr,a,s,n-1);
     }
     else{
         cout<<"call else function"<<endl;
      return find_element(arr,a,0,s-1);
     }
    }

int main(){
    int a,n;
    int arr[100];
    cout<<"enter size of array";
cin>>n;
cout<<"enter element of array";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"enter key element";
cin>>a;
int s=pivot(arr,n);
int A =binary(arr,n,a,s);
cout<<"final result is :"<< A << endl;
// cout<<"pivot element in array is :"<<pivot(arr,n)<<endl;
}