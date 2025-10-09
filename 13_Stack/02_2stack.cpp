#include<iostream>
#include<climits>
#include<string>
#include<stack>
#include<vector>
using namespace std;

class Stack{
    public:
        int *arr;
        int top1;
        int top2;
        int size;

        Stack(int capacity){
            arr = new int[capacity];
            top1 = -1;
            top2 = capacity;
            size = capacity;

        }

        void push1(int value){
            // normal push or Overflow
        if(top2-top1 == 1){
            cout << " Stack Overflow " << endl;
        }
        else{
            top1++;
            arr[top1] = value; 
        }
        }

        void push2(int value){
            // normal push or overflow
            if(top2-top1 == 1){
            cout << " Stack Overflow " << endl;
            }
            else{
            top2--;
            arr[top2] = value; 
            }
        }

        void pop1(){
        // normalpop or Underflow
        if(top1 == -1){
            cout << " Stack Underflow " << endl; 
        }
        else{
            top1--;
        }
        }
        
        void pop2(){
        // normalpop or Underflow
        if(top2 == size){
            cout << " Stack Underflow " << endl; 
        }
        else{
            top2++;
        }
        }

        void print(){
            for(int i=0;i<size;i++){
                cout << arr[i] << " ";
            } cout << endl;
        }

};


int main(){

    Stack s(10);

    s.push1(10);

    s.print();

    s.push2(20);

    s.print();

    s.push1(21);
    s.push1(31);
    s.push1(41);
    s.push1(51);
    s.push1(61);

    s.push2(111);
    s.push2(221);
    s.print();

    s.push2(331);
    s.print();
    
    s.push1(331);
    s.push2(331);
    s.print();


    return 0;
}