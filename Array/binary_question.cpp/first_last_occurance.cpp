#include<iostream>
using namespace std;
int first(int arr[],int a,int n){
   int i=0,j=n-1;
   int mid=i+(j-i)/2;
   int ans=-1;
   while(i<=j){
   if(arr[mid]==a){
    ans=mid;
    j=mid-1;
   }
   if(arr[mid]<a){
       i=mid+1;
   }
   else{
    j=mid-1;
   }
   mid=i+(j-i)/2;
}
return ans;
}
int last(int arr[],int a,int n){
   int i=0,j=n-1;
   int mid=i+(j-i)/2;
   int ans=-1;
    while(i<=j){
   if(arr[mid]==a){
   ans=mid;
   i=mid+1;
   }
   else if(arr[mid]<a){
       i=mid+1;
   }
   else if(arr[mid]>a){
    j=mid-1;
   }
   mid=i+(j-i)/2;
}
return ans;

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
 cout<<"first occurance is :"<< first(arr,a,n)<<endl;
 cout<<"last occurance is :"<<last(arr,a,n);
    }
// ------------- my code  ------------------------
// #include<iostream>
// using namespace std;
// int firstlast(int arr[],int a,int n){
// for(int i=0;i<n;i++){
//     if(arr[i]==a){
//         cout<<"first occurance is:"<< i <<endl;
//         while(arr[i]==a){
//             i++;

//         }
//        return i-1;
//     }
// }
// cout<<"first occurance"<< -1<<endl;
// return -1;
// }
//    int main(){
//     int a,n;
//     int arr[100];
//     cout<<"enter size of array";
//     cin>>n;
// cout<<"enter element of array";
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
//     cout<<"enter key element";
//     cin>>a;
//     cout<<"last occurance is:"<< firstlast(arr,a,n);
// }