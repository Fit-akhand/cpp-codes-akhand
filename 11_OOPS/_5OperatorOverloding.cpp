#include<iostream>
using namespace std;

class Complex{
    public:
    int real;
    int imag;

    // Complex(int real ,int imag)
    // {
    //     real = imag = -1;
    // }

    Complex(int r, int i) {
        this->real = r;
        this->imag = i;
    }

    void print()
    {
        printf("[%d + i%d]\n",this->real,this->imag);
    }

};

int main(){

    Complex A(2,5);
    A.print();
    Complex B(2,3);
    B.print();

    return 0;
}