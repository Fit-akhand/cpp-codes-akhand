#include <iostream>
using namespace std;

/*
int *update(int *p2){
p2 = p2 + 1;
cout << "updated : "<< p2 << endl;
return p2;
}
*/
void update(int *p){
    *p=*p+1;
}
int main()
{

    /*
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";

    cout << "address of first in integer : " << arr << endl;

    cout << "address of first in char : " << ch << endl;

    char *chr = ch;
    cout << "address of first in char : " << chr << endl;

    char a = 'z';
    char *b = &a;
    cout << "address of z : " << b << endl;
    */

    /*
    int val = 5;
    int *p2 = &val;
    cout << "before of p2 : " << p2 << endl;
    cout << "size of p2 : " << sizeof(p2) <<endl;
    cout<< update(p2) << endl;
    p2 = p2 + 2;
    cout << "after of val : "<< p2 << endl;
    cout << "size of p2 : " << sizeof(&p2) <<endl;
    */

    int value = 4;
    int *ptr = &value;

    cout << "value before -> " << *ptr <<endl ;
    update(ptr);   
    cout << "value after -> " << *ptr <<endl ;
}