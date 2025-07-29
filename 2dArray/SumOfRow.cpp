#include<iostream>
using namespace std;

void rowSum(int arr[][3],int n ,int m){
    for(int j=0 ;j<n;j++){
        int count=0;
        for(int i=0;i<m;i++){
            count += arr[i][j];
        }
        cout << "sum of " << j << " column is " << count << endl;
    }
}

int main(){
    int arr[3][3] ={1,2,3,4,5,6,7,8,9};

    rowSum(arr,3,3);

}