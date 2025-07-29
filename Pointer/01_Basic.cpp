#include<iostream>
using namespace std;

int main(){
    int num = 5 ;
    cout <<"number is num : " << num <<endl;

    cout<< "address of num is : " << &num <<endl;

    int *ptr = &num;

    double a= 4.3;

    double *p2 = &a;

    cout << "value of num is : " << *ptr <<endl;

    cout << "address of ptr is : " << ptr << endl;

    cout<<"size of num " << sizeof(num) << endl;

    cout<<"size of ptr " << sizeof(ptr) << endl;

    cout<<"size of num " << sizeof(a) << endl;

    cout<<"size of ptr " << sizeof(p2) << endl;

    int i = 3 ;
    int *p3 = &i;

     cout << "before value of i is : " << *p3 <<endl;

    cout << "before address of p3 is : " << p3 << endl;

    *p3 =*p3 +1;
    cout << "after value of i is : " << *p3 <<endl;
    p3 = p3 +1;

    cout << "after value of i is : " << *p3 <<endl;

    cout << "after maddress of p3 is : " << p3 << endl;



} 