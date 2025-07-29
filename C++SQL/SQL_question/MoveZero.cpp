#include<iostream>
using namespace std;
 int swapa(int arr[],int n){
    int i=0;
for(int j=0;j<6;j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
 }
int main(){
    int arr[6]={0,1,0,3,1,2};
    swapa(arr,6);
    for(int i=0;i<6;i++){
        cout<< arr[i] <<" ";
    }
}