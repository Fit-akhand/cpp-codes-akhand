#include <iostream>
using namespace std;

class CircularQueue {
public:
    int *arr;
    int size;
    int front;
    int rear;

    CircularQueue(int capacity) {
        size = capacity;
        arr = new int[size];
        front = -1;
        rear = -1;
        // optional: initialize with zeros
        for (int i = 0; i < size; i++) arr[i] = 0;
    }

    // Check if queue is full
    bool isFull() {
        return (front == 0 && rear == size - 1) || (rear + 1 == front);
    }

    // Check if queue is empty
    bool isEmpty() {
        return (front == -1);
    }

    // Insert element at rear
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue Overflow!" << endl;
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else if (rear == size - 1 && front != 0) {
            rear = 0; // wrap around
        } else {
            rear++;
        }
        arr[rear] = value;
    }

    // Delete element from front
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow!" << endl;
            return;
        }
        arr[front] = 0; // optional, for clear visualization
        if (front == rear) {
            // single element removed
            front = rear = -1;
        } else if (front == size - 1) {
            front = 0; // wrap around
        } else {
            front++;
        }
    }

    // Get front element
    int getFront() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[front];
    }

    // Print queue state
    void print() {
        cout << "Queue state: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.print();

    q.dequeue();
    q.dequeue();
    q.print();

    q.enqueue(50);
    q.enqueue(60);
    q.print();

    cout << "Front element: " << q.getFront() << endl;

    return 0;
}
