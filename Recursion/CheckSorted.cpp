#include<iostream>
using namespace std;

bool is_sorted(int arr[],int size){
    if(size==0 || size == 1) return true;
    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool ans = is_sorted(arr+1,size-1);
        return ans;
    }
}

int main(){
    int n;
    cout << "enter no of  element in array : ";
    cin >> n;
    int *arr = new int[n];

    cout<<"enter elemet -> ";

    for(int i=0;i<n;i++){
       cin >> arr[i];
    }

    if(is_sorted(arr,n)){
        cout << "Array is sorted" << endl;
    }
    else{
        cout<<"not sorted";  
    }
    
}