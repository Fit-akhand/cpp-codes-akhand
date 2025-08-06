#include<iostream>
using namespace std;

int get_sum(int arr[], int size) {
    if(size == 0) {
        return 0;
    }
    return arr[0] + get_sum(arr + 1, size - 1);
}

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size = 6;

    int ans = get_sum(arr, size);
    cout << "ans = " << ans;
}
