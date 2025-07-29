#include<iostream>
using namespace std;

int main(){
    int n;
    int m;
    cin >> n ;
    cin >> m ;

    int **arr = new int*[n];

    for(int i=0;i<n;i++){
        arr[i] = new int[m];
    }
    // input
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    // output
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << arr[i][j] << " ";
        }cout << endl;
    }
    // free memory in heap
    for(int i=0;i<n;i++){
        delete []arr[i];
    }

    delete []arr;

}