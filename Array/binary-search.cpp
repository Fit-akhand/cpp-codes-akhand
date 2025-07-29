#include<iostream>
using namespace std;

int find_element(int arr[],int a,int n){
    int i=0,j=n-1;
    // cout<<"before while"<<arr[0]<<" "<<arr[j];
    int mid=(i+j)/2;
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

cout<< find_element(arr,a,n);
}
//------------------- my code -----------------------------
// #include<iostream>
// using namespace std;
// int find_element(int arr[],int a,int n){
//     int i=0,j=n-1;
//     // cout<<"before while"<<arr[0]<<" "<<arr[j];
//     
//      while(i<=j){
        
//         if(arr[mid]==a){
//             return mid;
//         }
//         else if(arr[mid]>a){
//             j=mid;
//         }
//         else if(arr[mid]<a){
//             i=mid;
//         }
//          int mid=i+(i+j)/2;
//      }
//   cout<<"not present";
// }
// int main(){
//     int a,n;
//     int arr[100];
//     cout<<"enter size of array";
// cin>>n;
// cout<<"enter element of array";
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// cout<<"enter key element";
// cin>>a;

// cout<< find_element(arr,a,n);
// }