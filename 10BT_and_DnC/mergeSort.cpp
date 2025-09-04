#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[],int s,int e,int mid){

    //create copy of left and right sorted array
    int leftArrayLength = mid-s+1;
    int rightArrayLength = e-mid;

    int* arr1 = new int[leftArrayLength];
    int* arr2 = new int[rightArrayLength];

    int mainArrayIndex = s;
    for(int i=0 ; i<leftArrayLength ;i++){
        arr1[i] = arr[mainArrayIndex];
        mainArrayIndex++; 
    }
    mainArrayIndex = mid+1;
    for(int i=0;i < rightArrayLength;i++){
        arr2[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }
    //merge sorted array logic into the original array
    int i=0;
    int j=0;
    mainArrayIndex =s;
    while(i< leftArrayLength && j < rightArrayLength){
        if(arr1[i] < arr2[j]){
            arr[mainArrayIndex] = arr1[i];
            i++;
            mainArrayIndex++;
        }
        else{
            arr[mainArrayIndex] = arr2[j];
            j++;
            mainArrayIndex++;
        }
    }
    while(i < leftArrayLength){
        arr[mainArrayIndex] = arr1[i];
        mainArrayIndex++;
        i++;
    }
    while(j< rightArrayLength){
        arr[mainArrayIndex] = arr2[j];
        mainArrayIndex++;
        j++;
    }
    delete[] arr1;
    delete[] arr2;
}

void mergeSort(int arr[],int s,int e){

    if(s>=e){
        return;
    }
    //ek bade array ko 2 part me devide karte hai
    int mid = (s + e)/2;
    //left part ko recursion se solve karte hai
    mergeSort(arr,s,mid);
    //right part ko recursion se sort karte hai
    mergeSort(arr,mid+1,e);
    //sorted part ko merge kar do
    merge(arr,s,e,mid);
}

int main(){
    int arr[] = {7,2,4,3,1,5};
    int size = 6;
    int start =0;
    int end = size-1;

    mergeSort(arr,start,end);

    cout << "Sorted Array : ";
   for(int i=0;i<size;i++){
    cout << arr[i] << endl;
   }

}