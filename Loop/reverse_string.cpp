#include<iostream>
#include <cstring>
using namespace std;

void reverse(char arr[],int size){
    int s = 0;
    int e = size-1;
    while(e > s){
        char temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }

}

int main(){
    char arr[5] = "abcd";
    int size = strlen(arr);
    reverse(arr,size);

    cout <<" final string => " << arr ;
}