#include <bits/stdc++.h>
using namespace std;

/*
    ** C++ Iterators Overview **
    Iterators in C++ provide a way to traverse containers (like vectors, lists, maps) in a consistent manner.
    They allow access to container elements without exposing the internal structure.

    Types of Iterators:
    - **Input Iterator**: Reads data from a container (e.g., `begin()`).
    - **Output Iterator**: Writes data to a container (e.g., `push_back()`).
    - **Forward Iterator**: Can be moved in one direction.
    - **Bidirectional Iterator**: Can be moved both forward and backward (e.g., for `list`).
    - **Random Access Iterator**: Can access any element directly (e.g., for `vector`).

    Syntax:
    - `vector<int>::iterator it = v.begin();`
    - Access elements using `*it` and move the iterator with `it++` or `it--`.

    In this example, we will demonstrate a `vector<int>` and how to traverse it using an iterator.
*/

int main() {
    // Initialize vector with elements
    vector<int> v = {10, 20, 30, 40, 50};

    // Using an iterator to traverse the vector
    cout << "Iterating through vector using iterator:" << endl;

    vector<int>::iterator it = v.begin();
    while (it != v.end()) {
        cout << *it << endl;  // Dereference iterator to access the element
        it++;                 // Move to the next element
    }

    // Example 2: Reverse iteration using reverse_iterator
    cout << "\nIterating in reverse using reverse_iterator:" << endl;
    vector<int>::reverse_iterator rit = v.rbegin();
    while (rit != v.rend()) {
        cout << *rit << endl;  // Dereference reverse iterator
        rit++;                 // Move to the previous element
    }

    // Example 3: Using iterator with `for` loop (range-based)
    cout << "\nUsing iterator with a range-based for loop:" << endl;
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
