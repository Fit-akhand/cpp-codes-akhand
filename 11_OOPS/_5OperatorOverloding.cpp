#include<iostream>
using namespace std;

class Complex{
    public:
    int real;
    int imag;

    Complex() {
        real = 0;
        imag = 0;
    }

    Complex(int r, int i) {
        this->real = r;
        this->imag = i;
    }


    //syntax
    // Return_Type operator <op> (args){
    //     //mlkdmk
    //     return<>
    // }

    Complex operator+(const Complex &B)
    {
        Complex temp;
        temp.real = this->real + B.real;
        temp.imag = this->imag + B.imag; 
        return temp;
    }

    Complex operator-(const Complex &B)
    {
        Complex temp;
        temp.real = this->real - B.real;
        temp.imag = this->imag - B.imag; 
        return temp;
    }

    bool operator==(const Complex & B){
        return (this->real == B.real) && (this->imag == B.imag); 
    }


    void print()
    {
        printf("[%d + i%d]\n",this->real,this->imag);
    }


};

int main(){

    Complex A(2,5);
    A.print();
    Complex B(2,5);
    B.print();

    // bool a =5 == 5;
    // cout << a << endl;
    bool b = A == B;
    cout <<"compare : "<< b << endl;

    // Complex C = A + B;
    // C.print();
    
    // Complex D = A - B;
    // D.print();

    return 0;
}