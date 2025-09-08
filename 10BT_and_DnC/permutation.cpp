#include<iostream>
#include<string>
using namespace std;

void solve(string &str , int i){
    if(i >= str.length()){
        cout << str << endl;
        return;
    }

    for(int j=i; j < str.length();j++){
        swap(str[i],str[j]);
        solve(str,i+1);
        swap(str[i], str[j]);  // missing  // backtraking
    }
}

int main(){
    string str = "abc";
    int i=0;
    solve(str,i);
}