#include<iostream>
#include<vector>
using namespace std;
int main(){
        int n;
cout<<"enter size of array";
cin>> n;
int arr1[n];
cout<<"enter element of array";
for(int i=0;i<n;i++){
    cin>> arr1[i];
}
    int N;
cout<<"enter size of array";
cin>> N;
int arr2[N];
cout<<"enter element of array";
for(int i=0;i<N;i++){
    cin>> arr2[i];
}
int i=n-1;
int j=N-1;
int r;
int sum=0;
vector<int> ans;
int k=n-1;
int l=N-1;
while(k>=0 && l>=0){
int val1=arr1[k];
int val2=arr2[l];
sum =val1+val2+r;
r=sum/10;
sum=sum%10;
ans.push_back(sum);
}
for( int i:ans){
    cout<<i;
}

}
