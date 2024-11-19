#include <bits/stdc++.h>
using namespace std;

/*
    ** C++ Map (Associative Containers) Overview **
    A `map` in C++ is an ordered associative container that stores key-value pairs.
    The key is unique in the map, and elements are sorted by the key.

    Common `map` Methods:
    - `insert()`: Inserts a new key-value pair.
    - `find()`: Finds an element by its key.
    - `erase()`: Deletes an element by its key or iterator.
    - `clear()`: Removes all elements from the map.
    - `size()`: Returns the number of elements in the map.
    - `empty()`: Checks if the map is empty.
    - `begin()`, `end()`: Provides iterators to traverse the map.
    - `operator[]`: Accesses the value associated with the key.
*/

void print(map<int, string> &m) {
    // Iterate over the map and print key-value pairs
    for (auto pr : m) {
        cout << pr.first << ": " << pr.second << "  ";
    }
    cout << endl;
}

int main() {
    // Declare a map of int to string
    map<int, string> m;

    // Insert key-value pairs into the map using operator[] and insert()
    m[1] = "abc";
    m[2] = "cde";
    m.insert({3, "barishal"});

    // Print the map
    cout << "Initial map contents: ";
    print(m);

    // Accessing and modifying an element using operator[]
    cout << "Element with key 1: " << m[1] << endl;
    m[2] = "updated_cde";  // Modify value associated with key 2
    cout << "Updated element with key 2: " << m[2] << endl;

    // Using the `find()` method to search for a key
    auto it = m.find(3);
    if (it != m.end()) {
        cout << "Found element with key 3: " << it->first << ": " << it->second << endl;
    } else {
        cout << "Key 3 not found" << endl;
    }

    // Erase an element by key
    m.erase(3);  // Removes the element with key 3
    cout << "Map after erasing key 3: ";
    print(m);

    // Check the size of the map
    cout << "Size of the map: " << m.size() << endl;

    // Clear all elements from the map
    m.clear();
    cout << "Map after clear: ";
    print(m);  // Should print nothing

    // Check if the map is empty
    if (m.empty()) {
        cout << "The map is empty!" << endl;
    }

    return 0;
}
