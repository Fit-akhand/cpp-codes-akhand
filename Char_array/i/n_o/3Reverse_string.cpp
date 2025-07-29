#include<iostream>
using namespace std;
int getlength(char name[]){
     int count=0;
    for(int i=0;name[i]!='\0';i++){
        count ++;
    }
    return count;
}

int reverse(char a[],int k){
    int b=0;
    int c= k-1;
    while(b < c){
    swap(a[b++],a[c--]);
}
}
int main(){
    char name[20];
    cout<<"enter a character:";
    cin>> name;
    cout<< "your name is " << name<<endl;
    int k = getlength(name);
    // cout << "length of string is = " << k ;
    reverse(name,k);
    cout<< "reverse of your name is " << name;
}
