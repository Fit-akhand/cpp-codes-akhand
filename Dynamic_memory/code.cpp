#include<iostream>
using namespace std;

int sum(int arr[],int n){
    int total = 0;
    for(int i=0;i<n;i++){
        total += arr[i];
    }
    return total;
}
int main(){
    int n;
    cout << "Enter a value : " << endl ;
    cin >> n ;

// concept of dynamic memory
    int *arr = new int [n];

    int ans = sum(arr , n);

    cout << "final ans is = " << ans ;
}