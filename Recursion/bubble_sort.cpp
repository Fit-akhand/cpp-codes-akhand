#include<iostream>
#include<climits>
using namespace std;
void buble_sort(int arr[],int n){
    if(n==0||n==1){
        return ; 
    }
    for(int i=0;i<n;i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    return buble_sort(arr+n-1,n-1);
}
int main(){
    int arr[5] = {1,5,2,9,3};
    int size = sizeof(arr);
    buble_sort(arr,size);
    cout << arr << endl ;

}