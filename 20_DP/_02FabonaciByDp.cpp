 #include<iostream>
 #include<vector>
using namespace std;

// int solvefabonachi(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     int ans = solvefabonachi(n-1) + solvefabonachi(n-2);
//     return ans;
// }   

// 1D dp -> kuski isme ek hi variavle change ho raha n
int solveUsingMem(int n,vector<int> &dp){
    // base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    int ans = solveUsingMem(n-1,dp) + solveUsingMem(n-2,dp);
    dp[n] = ans;
    return ans;
} 

int main(){
    int n=8 ;
    // int ans = solve using recursion(n);
    // step 1 we figuring out this is one d Dp
    // create initialise , app the dp array
    vector<int> dp(n+1,-1);
    int ans = solveUsingMem(n,dp);
    cout << "ans : " << ans;
}