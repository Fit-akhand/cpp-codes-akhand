#include<iostream>
using namespace std;

bool linear_search(int arr[], int k, int size) {
    if(size == 0) {
        return false;
    }
    if(arr[0] == k) {
        return true;
    }
    return linear_search(arr + 1, k, size - 1);
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int to_find = 0;

    if(linear_search(arr, to_find, size)) {
        cout << "found";
    } else {
        cout << "not found";
    }
}
