#include<iostream>
#include <string>
using namespace std;

// refrence variable
void reverse_string(string& arr,int s,int e){
    if(s>e){
        return ;
    }
    swap(arr[s],arr[e]);
    s++;
    e--;
    reverse_string(arr,s,e);
}

int main(){
    string arr = "4d";
    int size = arr.size();
    int s = 0;
    int e = size-1;
    reverse_string(arr,s,e);
    cout <<"reverse string " << arr ;
}