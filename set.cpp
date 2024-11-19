#include <bits/stdc++.h>
using namespace std;

/*
    ** C++ Set and Unordered Set Overview **

    1. **set**:
       A `set` is an ordered associative container in C++ that stores unique elements. The elements are sorted in ascending order by default (or according to a specified comparator).
       - Time Complexity (on average): O(log n) for search, insertion, and deletion.

    2. **unordered_set**:
       An `unordered_set` is a hash-based associative container that stores unique elements. It does not maintain any order of elements.
       - Time Complexity (on average): O(1) for search, insertion, and deletion.

    **Common Methods for Both Containers:**
    - `insert()`: Inserts an element into the set.
    - `find()`: Finds an element with a specific value.
    - `erase()`: Removes an element from the set.
    - `size()`: Returns the number of elements in the set.
    - `empty()`: Checks if the set is empty.
    - `begin()`, `end()`: Returns iterators to the start and end of the set.
*/

void print_set(const set<string> &s) {
    cout << "Set elements: ";
    for (auto it : s) {
        cout << it << ' ';
    }
    cout << endl;
}

void print_unordered_set(const unordered_set<string> &s) {
    cout << "Unordered Set elements: ";
    for (auto it : s) {
        cout << it << ' ';
    }
    cout << endl;
}

int main() {
    // Using set
    set<string> s;
    s.insert("abc");
    s.insert("zsef");
    s.insert("bcd");

    // Print the set (elements will be ordered)
    print_set(s);

    // Find an element in the set
    auto it = s.find("abc");
    if (it != s.end()) {
        cout << "'abc' found in the set." << endl;
    } else {
        cout << "'abc' not found in the set." << endl;
    }

    // Using unordered_set
    unordered_set<string> us;
    us.insert("apple");
    us.insert("banana");
    us.insert("cherry");

    // Print the unordered set (elements are not ordered)
    print_unordered_set(us);

    // Find an element in the unordered set
    auto us_it = us.find("banana");
    if (us_it != us.end()) {
        cout << "'banana' found in the unordered set." << endl;
    } else {
        cout << "'banana' not found in the unordered set." << endl;
    }

    // Erase an element from unordered set
    us.erase("banana");
    cout << "Unordered set after erasing 'banana': ";
    print_unordered_set(us);

    // Checking the size of the set
    cout << "Size of the set: " << s.size() << endl;
    cout << "Size of the unordered set: " << us.size() << endl;

    // Check if the set is empty
    if (s.empty()) {
        cout << "The set is empty!" << endl;
    } else {
        cout << "The set is not empty!" << endl;
    }

    if (us.empty()) {
        cout << "The unordered set is empty!" << endl;
    } else {
        cout << "The unordered set is not empty!" << endl;
    }

    return 0;
}
