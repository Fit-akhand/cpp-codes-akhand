#include<iostream>
#include<climits>
#include<string>
#include<stack>
#include<vector>
using namespace std;

class Stack{
    public:
        int *arr;
        int top;
        int size;

    Stack(int capacity){
        arr = new int[capacity];
        top = -1;
        size = capacity;
    }

    void push(int value){
        // normal push or Overflow
        if(top == size-1){
            cout << " Stack Overflow " << endl;
        }
        else{
            top++;
            arr[top] = value; 
        }
    }

    void pop(){
        // normalpop or Underflow
        if(top == -1){
            cout << " Stack Underflow " << endl; 
        }
        else{
            arr[top] = 0 ;
            top--;
        }
    }

    int getSize(){
        return top+1;
    }

    bool isEmpty(){
        if(top == -1){
            //empty stack
            return true;
        }
        else{
            return false;
        }
    }

    int getTopElement(){
        if(top == -1){
            cout << " Empty Stack "<< endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }

};

int main(){

    Stack s(100);

    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.getSize() << endl;
    cout << s.getTopElement() << endl;
    
    s.pop();
    
    cout << s.getSize() << endl;
    cout << s.getTopElement() << endl;
    
    s.pop();
    
    cout << s.getSize() << endl;
    cout << s.getTopElement() << endl;
    
    s.pop();
    
    cout << s.getSize() << endl;
    cout << s.getTopElement() << endl;


    return 0;
}