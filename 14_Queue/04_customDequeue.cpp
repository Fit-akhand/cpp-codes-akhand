#include<iostream>
using namespace std;

class Deque{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Deque(int capacity) {
    arr = new int[capacity];
    size = capacity;
    front = -1;
    rear = -1;

    // initialize all array values to 0
    for(int i = 0; i < size; i++) {
        arr[i] = 0;
    }
}


    void pushfront( int value){
        // overflow
        // insert in empty 
        // single Element
        // normal
        if(front == 0){
            cout << "Overflow at front!" << endl;
        }
        else if(front ==-1 && rear == -1){
            front++;
            rear++;
            arr[front] = value;
        }
        else{
            front--;
            arr[front] = value;
        }
    }

    void pushback(int value){
        // overflow
        // insert in empty 
        // single Element
        // normal
        if(rear == size-1){
            cout << "Overflow at back!" << endl;
        }
        else if(front ==-1 && rear == -1){
            front++;
            rear++;
            arr[rear] = value;
        }
        else{
            rear++;
            arr[rear] = value;
        }
    }

    void popfront(){
        // underflow 
        // single element
        // normal pop
        if(front == -1 && rear ==-1){
            cout << "Underflow" << endl;
        }
        else if(front == rear){
            front = -1;
            rear = -1;
        }
        else{
            arr[front] =-1;
            front++;
        }
    }

    void popback(){
        if(front ==-1 && rear == -1){
            cout << "Underflow";
        }
        else if(front == rear){
            front =-1;
            rear =-1;
        }
        else{
            arr[rear] = -1;
            rear--;
        }
    }

    void print(){
        for(int i=0;i <size;i++){
            cout << arr[i] <<  " ";
        }cout << endl;
    }
};

int main(){

    Deque dq(7);

    dq.print();
    
    dq.pushback(50);
    dq.pushback(66);
    dq.pushfront(20);
    dq.pushfront(80);
    dq.pushback(55);
    dq.pushback(55);
    
    dq.print();

    dq.popfront();
    dq.popback();
    
    dq.print();
    
    return 0;
}