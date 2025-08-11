#include<iostream>
using namespace std;

void merge(int *arr, int s, int e) {
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    // create temporary arrays
    int *first = new int[len1];
    int *second = new int[len2];

    // copy data to temp arrays
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    // merge the temp arrays back into arr[s..e]
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2) {
        if (first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        } else {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    // copy remaining elements of first[]
    while (index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    // copy remaining elements of second[]
    while (index2 < len2) {
        arr[mainArrayIndex++] = second[index2++];
    }

    // free allocated memory
    delete[] first;
    delete[] second;
}

void merge_sort(int *arr, int s, int e) {
    // base case
    if (s >= e) {
        return;
    }

    int mid = s + (e - s) / 2;

    // sort left half
    merge_sort(arr, s, mid);

    // sort right half
    merge_sort(arr, mid + 1, e);

    // merge the sorted halves
    merge(arr, s, e);
}

int main() {
    int arr[5] = {2, 5, 1, 6, 9};
    int n = 5;

    merge_sort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
