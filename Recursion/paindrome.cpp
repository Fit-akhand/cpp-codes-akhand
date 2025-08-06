#include<iostream>
#include<string>
using namespace std;

bool check_pl(string str , int s,int e){
    if(s>e){
        return true;
    }
    if(str[s]==str[e]){
        s++;
        e--;
       return check_pl(str,s,e);
    }
    else{
        return false;
    }
}

int main(){
    string str = "abcdedcba";
    int size = str.length();
    int s =0;
    int e = size-1;
    if(check_pl(str,s,e)){
        cout << "palindrome" << endl;
    }
    else{
        cout << "not a palindrome" << endl;
    }
}