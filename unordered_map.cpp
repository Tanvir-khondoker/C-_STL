#include <bits/stdc++.h>
using namespace std;

/*
    ** C++ Unordered Map Overview **
    An `unordered_map` in C++ is a container that stores key-value pairs. It is similar to `map` but does not guarantee any order of elements.
    Internally, it uses a hash table, which provides constant time complexity (O(1)) for searching, insertion, and deletion on average.

    Common Methods in `unordered_map`:
    - `insert()`: Inserts a new key-value pair.
    - `find()`: Finds an element by its key.
    - `erase()`: Removes an element by its key or iterator.
    - `size()`: Returns the number of elements in the map.
    - `empty()`: Checks if the map is empty.
    - `begin()`, `end()`: Provides iterators to traverse the map.
    - `operator[]`: Accesses or inserts a value associated with a key.

    Differences Between `unordered_map` and `map`:
    - `unordered_map` provides faster average lookup and insertion time (O(1)) compared to `map` (O(log n)).
    - `unordered_map` does not maintain any order for the elements, whereas `map` sorts its elements by key.

*/

int main() {
    // Declare an unordered_map of int to string
    unordered_map<int, string> um;

    // Inserting elements into unordered_map using insert() and operator[]
    um[1] = "abc";
    um[2] = "cde";
    um.insert({3, "barishal"});

    // Printing the unordered_map contents
    cout << "Unordered Map contents:" << endl;
    for (auto pr : um) {
        cout << pr.first << ": " << pr.second << "  ";
    }
    cout << endl;

    // Accessing elements using operator[]
    cout << "Element with key 1: " << um[1] << endl;

    // Modifying value associated with a key
    um[2] = "updated_cde";
    cout << "Updated element with key 2: " << um[2] << endl;

    // Finding an element using find()
    auto it = um.find(3);
    if (it != um.end()) {
        cout << "Found element with key 3: " << it->first << ": " << it->second << endl;
    } else {
        cout << "Key 3 not found" << endl;
    }

    // Erasing an element by key
    um.erase(3);
    cout << "Unordered Map after erasing key 3:" << endl;
    for (auto pr : um) {
        cout << pr.first << ": " << pr.second << "  ";
    }
    cout << endl;

    // Check the size of the unordered_map
    cout << "Size of the unordered_map: " << um.size() << endl;

    // Check if the unordered_map is empty
    if (um.empty()) {
        cout << "The unordered_map is empty!" << endl;
    } else {
        cout << "The unordered_map is not empty!" << endl;
    }

    // Clear all elements from the unordered_map
    um.clear();
    cout << "Unordered Map after clear:" << endl;
    for (auto pr : um) {
        cout << pr.first << ": " << pr.second << "  ";
    }
    cout << endl;

    return 0;
}
