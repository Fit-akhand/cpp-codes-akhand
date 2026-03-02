#include <iostream>
#include <list>
using namespace std;

int main() {

    list<int> l;

    // push
    l.push_back(10);
    l.push_back(20);
    l.push_front(5);

    // begin and end (traverse)
    cout << "Elements: ";
    for (auto it = l.begin(); it != l.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // size
    cout << "Size: " << l.size() << endl;

    // front and back
    cout << "Front: " << l.front() << endl;
    cout << "Back: " << l.back() << endl;

    // insert
    auto it = l.begin();
    advance(it, 1);
    l.insert(it, 15);

    // erase
    it = l.begin();
    advance(it, 2);
    l.erase(it);

    // pop
    l.pop_front();
    l.pop_back();

    // remove (delete by value)
    l.push_back(30);
    l.push_back(40);
    l.remove(30);

    // empty check
    if (l.empty())
        cout << "List is empty" << endl;
    else
        cout << "List is not empty" << endl;

    // swap
    list<int> l2 = {100, 200};
    l.swap(l2);

    // clear
    l.clear();

    cout << "After clear, size: " << l.size() << endl;

    return 0;
}