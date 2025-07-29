#include<iostream>
using namespace std;

int length(char a[]){
     int i=0;
    while(a[i]!='\0'){
        i++;
    }
    return i;
}

void reverse(char arr[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

void print(char arr[],int n){
    for(int i=0;i<n;i++){
        cout<< arr[i];
    }
}

int main(){
    char a[20];
    cin >> a;

    cout << "your name is " ;
    cout << a <<endl;
    int n =length(a);
    cout << "length is : " << n <<endl ;

    reverse(a,n);

    print(a,n);

}