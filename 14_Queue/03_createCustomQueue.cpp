#include<iostream>
using namespace std;

class Queue{
public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int capacity){
        arr = new int[capacity];
        size = capacity;
        front = -1;
        rear = -1;
    }

    void push(int value){
        // overflow
        if(rear == size-1){
            cout << "Queue overflow";
            return;
        }

        // insert first element
        if(front ==-1 && rear ==-1){
            front++;
            rear++;
            arr[rear] = value;
        }
        // normal case
        else{
            rear++;
            arr[rear] = value;
        }

    }

    void pop(){
        // underflow
        if(front ==-1 && rear == -1){
            cout << "Queue underflow";
            return;
        }
        // single element
        if(front == rear){
            front =-1;
            rear =-1;
        }
        // normal pop
        else{
            front++;
        }

    }

    int getsize(){
        if(front == -1 && rear ==-1){
            return 0; 
        }
        else{
            return rear-front+1;
        }
    }

    bool checkEmpty(){
        if(front == -1 && rear ==-1){
            return true;
        }
        else{
            return false;
        }
    }

    int getFrontEle(){
        if(front == -1){
            cout << "there is no element";
        }
        else{
            int val = arr[front];
            return val;
        }
    }

    int getRearEle(){
        if(rear == -1){
            cout << "there is no element ";
        }
        else{
            int val = arr[rear];
            return val;
        }
    }

};

int main(){

    Queue q(5);
    
    q.push(5);
    q.push(15);
    q.push(25);
    q.push(35);
    q.push(45);

    cout << q.getsize() << endl;
    
    q.pop();
    q.pop();
    
    cout << q.getsize() << endl;
    
    return 0;
}