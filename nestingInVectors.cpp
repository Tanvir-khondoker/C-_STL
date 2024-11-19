#include <bits/stdc++.h>
using namespace std;

/*
    ** Nested Vectors in C++ STL **
    A vector of pairs or a vector of vectors is commonly used to handle complex data structures in C++.
    These structures are highly useful in competitive programming and real-world applications.

    Examples:
    - `vector<pair<int, int>>`: Stores a list of pairs (e.g., coordinates, key-value pairs).
    - `vector<vector<int>>`: Represents a 2D matrix or adjacency list in graph algorithms.

    Operations:
    - `push_back()`: Add elements (pairs or vectors) to the main vector.
    - Access using `v[i].first` and `v[i].second` for pairs or nested loops for vector of vectors.
*/

void printVector(const vector<pair<int, int>> &v) {
    cout << "Size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << "{" << v[i].first << ", " << v[i].second << "} ";
    }
    cout << endl;
}

int main() {
    // Declare a vector of pairs
    vector<pair<int, int>> v;

    // Input number of pairs
    cout << "Enter the number of pairs: ";
    int n;
    cin >> n;

    // Input pairs
    cout << "Enter " << n << " pairs (x y): " << endl;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y}); // Using direct initialization
    }

    // Print the vector of pairs
    cout << "Vector of Pairs:" << endl;
    printVector(v);

    // Additional Example: Nested vector of integers
    cout << "\nExample: Vector of Vectors (2D Matrix)" << endl;
    vector<vector<int>> nested_v;
    cout << "Enter the number of rows for nested vector: ";
    int rows;
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        cout << "Enter the size of row " << i + 1 << ": ";
        int size;
        cin >> size;

        vector<int> temp; // Temporary vector to store a row
        cout << "Enter " << size << " elements for row " << i + 1 << ": ";
        for (int j = 0; j < size; j++) {
            int x;
            cin >> x;
            temp.push_back(x);
        }

        nested_v.push_back(temp); // Add row to the nested vector
    }

    // Print the nested vector
    cout << "\nNested Vector (2D Matrix):" << endl;
    for (int i = 0; i < nested_v.size(); i++) {
        cout << "Row " << i + 1 << ": ";
        for (int j = 0; j < nested_v[i].size(); j++) {
            cout << nested_v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
