#include <bits/stdc++.h>
using namespace std;

/*
    ** C++ Multiset Overview **

    A `multiset` is similar to a `set`, but it allows multiple occurrences of the same element.
    The elements are always sorted by their value (in ascending order by default).
    The time complexity for most operations like insertion, search, and deletion is O(log n), similar to `set`.

    **Common Methods in `multiset`:**
    - `insert()`: Adds an element to the multiset (duplicates are allowed).
    - `erase()`: Removes an element from the multiset.
    - `find()`: Finds an element in the multiset.
    - `count()`: Returns the number of occurrences of a given element.
    - `size()`: Returns the number of elements in the multiset.
    - `empty()`: Checks if the multiset is empty.
    - `begin()`, `end()`: Returns iterators to the start and end of the multiset.
*/

void print_multiset(const multiset<int> &ms) {
    cout << "Multiset elements: ";
    for (auto it : ms) {
        cout << it << ' ';
    }
    cout << endl;
}

int main() {
    // Using multiset
    multiset<int> ms;

    // Inserting elements (duplicates allowed)
    ms.insert(10);
    ms.insert(20);
    ms.insert(10);
    ms.insert(30);
    ms.insert(20);
    ms.insert(20);

    // Print the multiset (elements will be ordered)
    print_multiset(ms);

    // Find an element in the multiset
    auto it = ms.find(20);
    if (it != ms.end()) {
        cout << "'20' found in the multiset." << endl;
    } else {
        cout << "'20' not found in the multiset." << endl;
    }

    // Count the number of occurrences of 20 in the multiset
    cout << "Count of '20' in multiset: " << ms.count(20) << endl;

    // Erase all occurrences of a specific element
    ms.erase(20);
    cout << "Multiset after erasing all occurrences of '20': ";
    print_multiset(ms);

    // Check the size of the multiset
    cout << "Size of the multiset: " << ms.size() << endl;

    // Check if the multiset is empty
    if (ms.empty()) {
        cout << "The multiset is empty!" << endl;
    } else {
        cout << "The multiset is not empty!" << endl;
    }

    return 0;
}
