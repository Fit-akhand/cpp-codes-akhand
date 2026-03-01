#include<iostream>
#include<queue>
using namespace std;

class Heap{
    public:
    int*arr;
    int size;
    int index;

    Heap (int capacity){
        size = capacity;
        arr= new int[size];
        index =0;
    }

    void insert(int value){
        //overflow
        if(index == size-1){
            cout << "overflow" << endl;
            return;
        }
        //insert logic
        index++;
        arr[index] = value;
        // correcton position
        int childindex = index;
        while(childindex > 1){
            int parentindex = childindex/2;
            if(arr[childindex]>arr[parentindex]){
                swap(arr[childindex],arr[parentindex]);
                childindex = parentindex;
            }
            else{
                // jab parent child se bada ho
                break;
            }
        } 
    }

    void printHeap(){
        for(int i=0;i<size;i++){
            if(i==0){
                cout <<"X" << " ";
            }
            else{
                cout<< arr[i] <<" ";
            }
        }
        cout<< endl;
    }

    void deleteFromHeap(){
        swap(arr[1],arr[index]);
        index--;
        int capacity = index; 
        heapify(arr,capacity,1);
    }

    void heapify(int*arr,int capacity,int currIndex){
        int i = currIndex;
        int leftChild  = 2*i;
        int rightChild = 2*i+1;
        // now target is find the largest index
        int largestindex = i;
        //check for leftindex
        if(leftChild < capacity && arr[leftChild] > arr[largestindex]){
            largestindex = leftChild;
        }
        //check for rightindex
        if(rightChild < capacity && arr[rightChild] > arr[largestindex]){
            largestindex = rightChild;
        }
        
        if(largestindex !=i){
            swap(arr[i],arr[largestindex]);
            i = largestindex;
            heapify(arr,capacity,i);
        }
        

    }

};


int main(){

    Heap hp(6);
    hp.insert(5);
    hp.insert(7);
    hp.insert(8);
    hp.insert(2);
    hp.insert(4);
    // hp.insert(1);
    // hp.insert(3);
    
    hp.printHeap();
    // hp.deleteFromHeap();
    // hp.printHeap();

    
    // min heap
    // priority_queue<int,vector<int>,greater<int>> pq;
    // pq.push(5);
    // pq.push(7);
    // pq.push(8);
    // pq.push(2);
    // pq.push(4);
    
    // cout << pq.top() << endl;
    // pq.pop();
    // cout << pq.top() << endl;
    
    
    
    // max heap
    // priority_queue<int> pq;
    // pq.push(5);
    // pq.push(7);
    // pq.push(8);
    // pq.push(2);
    // pq.push(4);

    // cout <<pq.size() << endl;

    // cout<< pq.empty() << endl;
    
    // cout<< pq.top() << endl;
    // pq.pop();
    // cout<< pq.top() << endl;

    return 0;
}