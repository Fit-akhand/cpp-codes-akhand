#include<iostream>
#include<limits.h>
using namespace std;

int rowSum(int arr[][3],int n ,int m){
    int max = INT_MIN;
    int ans=-1;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<m;j++){
            count += arr[i][j];
        }
        if(count>max){
            max=count;
            ans=i;
        }
    }
    return ans+1;
}

int main(){
    int arr[3][3] ={1,2,3,4,5,6,7,8,9};

    int ans = rowSum(arr,3,3);
    cout << "Max row sum is " << ans ;

}