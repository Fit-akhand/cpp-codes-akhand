#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v;

    // push_back
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // size
    cout << "Size: " << v.size() << endl;

    // capacity
    cout << "Capacity: " << v.capacity() << endl;

    // front and back
    cout << "Front: " << v.front() << endl;
    cout << "Back: " << v.back() << endl;

    // insert
    v.insert(v.begin() + 1, 15);   // insert at index 1

    // erase
    v.erase(v.begin() + 2);        // remove element at index 2

    // empty
    if (v.empty())
        cout << "Vector is empty" << endl;
    else
        cout << "Vector is not empty" << endl;

    // reserve
    v.reserve(20);
    cout << "Capacity after reserve: " << v.capacity() << endl;

    // pop_back
    v.pop_back();

    // print elements using begin() and end()
    cout << "Elements: ";
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // swap
    vector<int> v2 = {100, 200};
    v.swap(v2);

    cout << "After swap, v elements: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    return 0;
}