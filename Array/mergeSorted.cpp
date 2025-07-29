#include<iostream>
using namespace std;

void merge(int a1[],int n ,int a2[] ,int m,int arr3[]){
    int i=0;
    int j=0;
    int k=0;
    while(i<n && i<m){
        if(a1[i] < a2[j]){
            arr3[k++] = a1[i++];
        }
        else{
            arr3[k++]= a2[j++];
        }
    }

    while(i<n){
        arr3[k++] =a1[i++];
    }
    while(j<n){
        arr3[k++] =a2[j++];
    }
}

void print(int a3[] ,int n ){
    for(int i=0;i<n;i++){
        cout<< a3[i] << " " ;
    } 
}

int main(){
    int arr[3] = {1,3,5};
    int m = 3;
    int arr2[3] = {2,4,6};
    int n=3;
    int arr3[6]={0};

    merge(arr,3,arr2,3,arr3);

    print(arr3,6);

}