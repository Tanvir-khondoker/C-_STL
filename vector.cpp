#include <bits/stdc++.h>
using namespace std;

/*
    ** C++ Vector Overview **
    `std::vector` is a part of the C++ Standard Template Library (STL) and is a dynamic array that can grow and shrink in size.
    It provides flexibility in managing a collection of elements with constant-time insertion at the end.

    Key Features:
        - Stores elements in contiguous memory.
        - Dynamic resizing: Automatically adjusts its size as elements are added or removed.
        - Random access is O(1), similar to arrays.

    Common Operations:
        - `push_back(x)`: Adds element `x` to the end. Complexity: O(1) (amortized).
        - `pop_back()`: Removes the last element. Complexity: O(1).
        - `size()`: Returns the number of elements in the vector.
        - `clear()`: Removes all elements. Complexity: O(n).
        - `resize(n)`: Resizes the vector to contain `n` elements.
*/

void printVector(const vector<int> &v) {
    cout << "Size: " << v.size() << endl;
    cout << "Elements: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v;

    // Input: Number of elements and the elements themselves
    cout << "Enter the number of elements: ";
    int n;
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x); // Adds the element to the vector
    }

    // Print the vector
    cout << "Initial Vector:" << endl;
    printVector(v);

    // Example 1: Add more elements
    cout << "Adding more elements to the vector..." << endl;
    v.push_back(42);
    v.push_back(99);
    printVector(v);

    // Example 2: Remove the last element
    cout << "Removing the last element..." << endl;
    v.pop_back();
    printVector(v);

    // Example 3: Resize the vector
    cout << "Resizing the vector to size 5..." << endl;
    v.resize(5);
    printVector(v);

    // Example 4: Clear the vector
    cout << "Clearing the vector..." << endl;
    v.clear();
    printVector(v);

    return 0;
}
