#include <iostream>
using namespace std;
void update(int **ptr2){
    // ptr2 = ptr2 + 1;
    // *ptr2 = *ptr2 + 1;
    **ptr2 = **ptr2 + 1;

}

int main()
{
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;

    /*
    cout <<"address of i : " << &i <<endl;
    cout <<"address of i : " << ptr <<endl;
    cout <<"address of ptr : " << ptr2  << endl;
    cout<< endl ;
    cout <<"value of i : " << *ptr <<endl;
    cout <<"value of ptr : " << *ptr2  << endl;
    cout<< endl ;
    cout <<"value of i : " << i <<endl;
    cout <<"value of i : " << *ptr <<endl;
    cout <<"value of i : " << **ptr2  << endl;
    cout<< endl ;
    cout <<"value of i : " << &i <<endl;
    cout <<"value of i : " << ptr <<endl;
    cout <<"value of i : " << *ptr2  << endl;
    cout<< endl ;
    cout <<"value of i : " << &ptr <<endl;
    cout <<"value of i : " << ptr2  << endl;
*/
    cout << "value of i before : " << i << endl;
    cout << "value of ptr before : " << ptr << endl;
    cout << "value of ptr2 before : " << ptr2 << endl;
    update(ptr2);
    cout << "value of i after : " << i << endl;
    cout << "value of ptr after : " << ptr << endl;
    cout << "value of ptr2 after : " << ptr2 << endl;
}