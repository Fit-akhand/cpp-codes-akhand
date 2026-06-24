#include<iostream>
using namespace std;

int fabonachi(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int ans = fabonachi(n-1) + fabonachi(n-2);
    return ans;
}   

int main(){
    int n=5;
    int ans = fabonachi(n);
    cout << "ans : " << ans;
}