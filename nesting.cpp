#include <bits/stdc++.h>
using namespace std;

/*
    ** Nesting Different STL Containers in C++ **

    1. **Nesting a pair inside a vector**:
       A `pair` can hold two different values of any data types. Nesting a `pair` inside a `vector` allows us to store multiple pairs in a collection.

    2. **Nesting a set of pairs**:
       A `set<pair<T, U>>` allows us to store pairs in a sorted order without duplicates.

    3. **Nesting a map with a pair as key**:
       A `map<pair<T, U>, V>` allows us to use a pair as the key and store associated values.

    4. **Nesting a vector of sets**:
       A `vector<set<T>>` stores multiple sets, allowing us to organize data in separate sets within a vector.

    5. **Custom Comparator for Pair in Map**:
       We can also customize the sorting of pairs using a comparator function when nesting them inside a `map`.

*/

void print_vector_of_pairs(const vector<pair<int, int>>& v) {
    cout << "Vector of pairs: ";
    for (auto& p : v) {
        cout << "{" << p.first << ", " << p.second << "} ";
    }
    cout << endl;
}

void print_set_of_pairs(const set<pair<int, int>>& s) {
    cout << "Set of pairs: ";
    for (auto& p : s) {
        cout << "{" << p.first << ", " << p.second << "} ";
    }
    cout << endl;
}

int main() {

    // 1. **Nesting Pair inside a Vector**
    vector<pair<int, string>> v;
    v.push_back({1, "apple"});
    v.push_back({2, "banana"});
    v.push_back({3, "cherry"});

    cout << "1. Vector of pairs:\n";
    print_vector_of_pairs(v);

    // 2. **Nesting Set of Pairs**
    set<pair<int, int>> s;
    s.insert({1, 2});
    s.insert({3, 4});
    s.insert({2, 3});
    s.insert({1, 2}); // Duplicates will not be added

    cout << "\n2. Set of pairs (duplicates removed, sorted):\n";
    print_set_of_pairs(s);

    // 3. **Nesting Map with Pair as Key**
    map<pair<int, int>, string> m;
    m[{1, 2}] = "Point 1";
    m[{2, 3}] = "Point 2";
    m[{3, 4}] = "Point 3";

    cout << "\n3. Map with pair as key:\n";
    for (auto& pr : m) {
        cout << "Key: (" << pr.first.first << ", " << pr.first.second << ") -> Value: " << pr.second << endl;
    }

    // 4. **Nesting Vector of Sets**
    vector<set<int>> vec_of_sets;
    set<int> set1 = {1, 2, 3};
    set<int> set2 = {4, 5, 6};
    vec_of_sets.push_back(set1);
    vec_of_sets.push_back(set2);

    cout << "\n4. Vector of sets:\n";
    for (auto& s : vec_of_sets) {
        cout << "{ ";
        for (auto& elem : s) {
            cout << elem << " ";
        }
        cout << "} ";
    }
    cout << endl;

    // 5. **Custom Comparator for Pair in Map**
    // Define a comparator function for sorting pairs in a custom way
    auto custom_comp = [](pair<int, int> a, pair<int, int> b) {
        return a.first > b.first;  // Sort by the first element in descending order
    };

    map<pair<int, int>, string, decltype(custom_comp)> custom_map(custom_comp);
    custom_map[{1, 2}] = "First Point";
    custom_map[{2, 3}] = "Second Point";
    custom_map[{3, 4}] = "Third Point";

    cout << "\n5. Map with custom comparator (sorted by first element in descending order):\n";
    for (auto& pr : custom_map) {
        cout << "Key: (" << pr.first.first << ", " << pr.first.second << ") -> Value: " << pr.second << endl;
    }

    // **Nested Pair comparison example**
    pair<int, int> p1 = {2, 2};
    pair<int, int> p2 = {2, 3};
    cout << "\nNested Pair Comparison (p1 > p2): " << (p1 > p2) << endl;

    return 0;
}
