#include<iostream>
using namespace std;
int sum(int arr[],int n){
    int sum=0;
    for(int i=0 ; i<n ; i++){
        sum = sum + arr[i];
    } 
    return sum;
}
int main(){
    int n;
    cout << "enter a number :";
    cin >> n;  
    int *arr = new int[n];
    
    for(int i=0 ; i<n ;i++){
        cin >> arr[i];
    }

    int ans = sum(arr,n);
    cout << " sum of element of arr = " << ans ;
}