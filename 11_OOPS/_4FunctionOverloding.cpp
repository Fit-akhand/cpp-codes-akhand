#include<iostream>
using namespace std;

class Add{
public:
    int sum(int a,int b){
        cout << "Sum of two int " << endl;
        return a + b;
    }
    int sum(int a,int b,int c){
        cout << "Sum of three int " << endl;

        return a + b + c;
    }
    double sum(double a,double b){
        cout << "Sum of two double " << endl;

        return a + b;
    }
};

int main(){

    int a = 5;
    int b = 5;
    int c = 5;

    double x = 6;
    double y = 6;

    Add add;
    cout << add.sum(a,b,c) << endl;
    
    cout << add.sum(x,y) << endl;

    return 0;
}