#include<iostream>
#include<vector>
using namespace std;
int merge(int arr1[],int n,int arr2[],int m,int arr3[]){
  int i=0,j=0,a=0;
  while(i<n&&j<m){
     if(arr1[i]>arr2[j]){
       arr3[a]=arr2[j];
       a++;
       j++;
     }
    else {
         arr3[a]=arr1[i];
       a++;
       i++;
    }
  }
  while(i<n){
    arr3[a++]=arr1[i++];
  }
  while(j<m){
    arr3[a++]=arr1[j++];
  }
}
void print(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<< arr[i]<<" ";
  }
}
int main(){
    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};
    int arr3[9];

    merge(arr1,5,arr2,3,arr3);
 print(arr3,8);
}