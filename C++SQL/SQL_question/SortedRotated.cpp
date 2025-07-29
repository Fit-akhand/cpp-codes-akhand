#include<iostream>
using namespace std;
int rs(int arr[],int n ){
    int o=0;
for(int i=1;i<n;i++){
    if(arr[i-1]>arr[i]){
        o++;
    }
}
if(arr[0]<arr[n-1]){
    o++;
}
// }o< for if all value are equal 
return o<=1;

}
int main(){
    int n;
cout<<"enter size of array";
cin>> n;
int arr[n];
for(int i=0;i<n;i++){
    cin>> arr[i];
}
int i=rs(arr,n);
if(i==1){
    cout<<"sorted & rotated";
}
}