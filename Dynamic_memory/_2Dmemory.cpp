#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout << "enter no of row and column of 2D array : " << endl;
    cin >> n ;
    cin >> m ;

    int **arr = new int*[n];

    for(int i=0 ; i<n ;i++){
        arr[i] = new int[m];
    }

    cout << "enter elements of array : ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }cout <<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << arr[i][j] <<" ";
        }cout <<endl;
    }
    
}