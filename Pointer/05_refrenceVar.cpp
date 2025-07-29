#include<iostream>
using namespace std;

int main(){
    int i=5;
    // int &j=i;
    // cout << i << endl;
    // i++;
    // cout << i << endl;
    // j++;
    // cout << i << endl;
    // cout <<  << endl;

    cout << sizeof(i) << endl;
    
    int *ptr = new int ;
    cout << sizeof(ptr) << endl;
    int *ptr2 = new int[20] ;
    cout << sizeof(ptr2);

}