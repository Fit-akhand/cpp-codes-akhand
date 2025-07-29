#include<iostream>
using namespace std;
int getlength(char name[]){
     int count=0;
    for(int i=0;name[i]!='\0';i++){
        count ++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"enter a character:";
    cin>> name;
   int k = getlength(name);
    cout << "length of string is = " << k ;
}