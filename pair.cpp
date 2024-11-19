#include <bits/stdc++.h>
using namespace std;

/*
    ** C++ Pair Overview **
    `std::pair` is a part of the C++ Standard Template Library (STL) and is used to store two heterogeneous objects as a single unit.
    It is commonly used when two values need to be grouped together.

    Syntax:
        pair<Type1, Type2> variable_name;

    Members:
        - `.first` : Accesses the first element of the pair.
        - `.second`: Accesses the second element of the pair.

    Typical Use Cases:
        - Returning two values from a function.
        - Storing key-value pairs in algorithms or data structures like maps.
*/

int main()
{
    // Basic Initialization
    pair<int, string> p1;
    p1 = make_pair(3, "example"); // Using make_pair
    cout << "Pair 1: " << p1.first << ", " << p1.second << endl;


    // Direct Initialization
    pair<int, string> p2 = {2, "hello"};
    cout << "Pair 2: " << p2.first << ", " << p2.second << endl;


    // Pair inside a pair
    pair<int, pair<int, string>> nested_pair = {1, {2, "nested"}};
    cout << "Nested Pair: " << nested_pair.first << ", "
         << nested_pair.second.first << ", " << nested_pair.second.second << endl;


    // Pair with containers (e.g., vector of pairs)
    vector<pair<int, string>> pair_list =
    {
        {1, "one"}, {2, "two"}, {3, "three"}
    };
    cout << "Vector of Pairs:" << endl;
    for (const auto &item : pair_list)
    {
        cout << "  " << item.first << " -> " << item.second << endl;
    }



    // Swap pairs
    pair<int, string> p3 = {5, "swap"};
    pair<int, string> p4 = {6, "pairs"};
    cout << "Before Swap: p3 = {" << p3.first << ", " << p3.second
         << "}, p4 = {" << p4.first << ", " << p4.second << "}" << endl;
    swap(p3, p4); // Swapping the pairs
    cout << "After Swap: p3 = {" << p3.first << ", " << p3.second
         << "}, p4 = {" << p4.first << ", " << p4.second << "}" << endl;

    return 0;
}
