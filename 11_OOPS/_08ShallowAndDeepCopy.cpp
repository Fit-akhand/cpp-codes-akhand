#include<iostream>
using namespace std;

class abc
{
    public:
    
    int x;
    int *y;

    abc(int _x,int _y):x(_x),y(new int(_y)){
    }

    // default dumb constructor
    // abc(const abc &obj){
    //     x = obj.x;
    //     y = obj.y;  
    // }

    // smart DEEP copy
    abc(const abc &obj){
        x = obj.x;
        y = new int(*obj.y);  
    }

    void print()
    {
        cout << "X :" << x << "\nptr : " << y <<"\nY : " << *y << endl;
    }
    ~abc(){
        delete y;
    }
};

int main (){

    abc a(1,2);
    cout << "Value of a => ";
    a.print();
    
    abc b=a; // call copy constructor
    *b.y=3;
    b.x = 5;
    cout << "\nValue of b => ";
    b.print();
    
    cout << "\nValue of a => ";
    a.print();

    return 0;
}