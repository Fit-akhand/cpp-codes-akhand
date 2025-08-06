#include<iostream>
using namespace std;

bool binary_search(int arr[],int size,int key){
    int s = 0;
    int e = size-1;
    int mid = s+(e-s)/2;

    if(size == 0){
        return false;
    }

    if(arr[mid]==key){
        return true;
    }
    else{
        if(arr[mid] < key){
            return binary_search(arr+mid+1,size-mid-1,key);
        }
        else{
            return binary_search(arr,mid,key);
        }
    }
}
int main(){
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int size = 10;
    int key = 12;

   if(binary_search(arr,size,key)){
    cout << "found" << endl ; 
   }
   else{
    cout << "not found" << endl;
   }
}