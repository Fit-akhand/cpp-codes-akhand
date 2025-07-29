#include<iostream>
using namespace std;

int stair(int a){
//    BC..
if(a<0){
    return 0;
}
if(a==0){
    return 1;
}
int ans=stair(a-1)+stair(a-2);
return ans;
}

int main(){
    int n;
    cout<< "enter a number->";
    cin>> n;
    int k= stair(n);
    cout<<"no of satir "<< k;
}