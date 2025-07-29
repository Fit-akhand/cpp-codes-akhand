#include<iostream>
using namespace std;
void swaa(int arr[8]){
 for(int i=0;i<=7;i++){
        if(i%2!=0){
            swap(arr[i],arr[i-1]);
        }
    }  
}
int main(){
    int arr[23]={2,3,4,5,6,7,8,6};
     swaa(arr);
    for(int i=0;i<=7;i++){
        cout<<" "<< arr[i]<<" ";
    }
}