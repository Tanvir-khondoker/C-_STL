
markdown
Copy code
# C++ STL Examples and Notes

This repository is a comprehensive guide to the **C++ Standard Template Library (STL)**, designed for competitive programming, software development, and general C++ programming. It includes well-documented examples and structured notes for learning, practicing, and revisiting STL concepts.

---

## 📂 Repository Structure
This repository is organized based on the different components of STL, categorized into **Containers**, **Algorithms**, **Iterators**, and **Functors**. Each file contains:
- A brief explanation of the component.
- Key features and commonly used functions.
- Practical examples with detailed comments for better understanding.

---

## 📌 STL Overview

### 1. **Containers**
Containers are objects that store collections of data. They are broadly categorized as **Sequence Containers**, **Associative Containers**, **Unordered Containers**, and **Container Adapters**.

#### a) **Sequence Containers**
1. **`std::vector`** (Dynamic array):
   - **Functions**: 
     - `push_back()`, `pop_back()`, `size()`, `capacity()`, `resize()`, `at()`, `clear()`, `empty()`, `front()`, `back()`, `insert()`, `erase()`.
     - **Iterators**: `begin()`, `end()`, `rbegin()`, `rend()`.
   - **Usage**: Efficient random access, dynamic resizing.

2. **`std::deque`** (Double-ended queue):
   - **Functions**:
     - `push_front()`, `push_back()`, `pop_front()`, `pop_back()`, `size()`, `clear()`, `at()`, `front()`, `back()`.
     - **Iterators**: `begin()`, `end()`, `rbegin()`, `rend()`.
   - **Usage**: Fast insertions/removals at both ends.

3. **`std::list`** (Doubly linked list):
   - **Functions**:
     - `push_front()`, `push_back()`, `pop_front()`, `pop_back()`, `size()`, `clear()`, `insert()`, `erase()`, `front()`, `back()`, `sort()`, `merge()`, `reverse()`.
     - **Iterators**: `begin()`, `end()`, `rbegin()`, `rend()`.
   - **Usage**: Efficient insertions/deletions at any position.

4. **`std::array`** (Fixed-size array, C++11):
   - **Functions**:
     - `at()`, `size()`, `front()`, `back()`, `fill()`, `swap()`.
   - **Usage**: Static arrays with STL compatibility.

5. **`std::forward_list`** (Singly linked list, C++11):
   - **Functions**:
     - `push_front()`, `pop_front()`, `insert_after()`, `erase_after()`, `merge()`, `reverse()`, `sort()`, `clear()`.
     - **Iterators**: `begin()`, `end()`.
   - **Usage**: Space-efficient linked lists.

---

#### b) **Associative Containers**
1. **`std::set`** (Unique, ordered elements):
   - **Functions**:
     - `insert()`, `erase()`, `find()`, `count()`, `lower_bound()`, `upper_bound()`, `size()`, `clear()`, `empty()`.
   - **Usage**: Fast search and sorted unique elements.

2. **`std::multiset`** (Duplicate, ordered elements):
   - **Functions**: Same as `std::set`.

3. **`std::map`** (Key-value pairs, ordered by key):
   - **Functions**:
     - `insert()`, `erase()`, `find()`, `count()`, `size()`, `clear()`, `[]` operator for element access, `lower_bound()`, `upper_bound()`.
   - **Usage**: Fast key-based lookup.

4. **`std::multimap`** (Duplicate keys, ordered by key):
   - **Functions**: Same as `std::map`, except no `[]` operator.

---

#### c) **Unordered Containers**
1. **`std::unordered_set`** (Unique, unordered elements):
   - **Functions**: Similar to `std::set`, but with average O(1) operations.

2. **`std::unordered_multiset`** (Duplicate, unordered elements):
   - **Functions**: Similar to `std::multiset`.

3. **`std::unordered_map`** (Key-value pairs, unordered):
   - **Functions**: Similar to `std::map`, but with average O(1) operations.

4. **`std::unordered_multimap`** (Duplicate keys, unordered):
   - **Functions**: Similar to `std::multimap`.

---

#### d) **Container Adapters**
1. **`std::stack`** (LIFO data structure):
   - **Functions**: 
     - `push()`, `pop()`, `top()`, `size()`, `empty()`.

2. **`std::queue`** (FIFO data structure):
   - **Functions**: 
     - `push()`, `pop()`, `front()`, `back()`, `size()`, `empty()`.

3. **`std::priority_queue`** (Priority-based elements):
   - **Functions**: 
     - `push()`, `pop()`, `top()`, `size()`, `empty()`.

---

### 2. **Algorithms**
Algorithms operate on containers to perform operations like searching, sorting, and modifying elements. Key functions include:
- **Searching**: 
  - `std::find()`, `std::binary_search()`.
- **Sorting**: 
  - `std::sort()`, `std::partial_sort()`, `std::stable_sort()`.
- **Permutation**:
  - `std::next_permutation()`, `std::prev_permutation()`.
- **Numeric Operations**:
  - `std::accumulate()`, `std::inner_product()`.
- **Modifying Operations**:
  - `std::transform()`, `std::replace()`, `std::remove()`.

---

### 3. **Iterators**
Iterators provide a way to traverse and manipulate elements in containers. Types include:
- **Input Iterators**: Read-only access.
- **Output Iterators**: Write-only access.
- **Forward Iterators**: Read/write, single-pass traversal.
- **Bidirectional Iterators**: Read/write, bidirectional traversal.
- **Random Access Iterators**: Full control, supports random access.

Specialized iterators:
- **Reverse Iterators**: Traverse in reverse using `rbegin()` and `rend()`.
- **Stream Iterators**: Handle input and output streams (`std::istream_iterator`, `std::ostream_iterator`).

---

### 4. **Functors**
Functors (function objects) are classes that overload the `()` operator. They are often used in algorithms for custom operations.
- **Common Functors**:
  - `std::greater`: Compares elements in descending order.
  - `std::less`: Compares elements in ascending order (default).
- **Custom Functors**: Create your own for specific needs.

---

## 🌟 Highlights
- **Organized Categories**: Divided into logical sections for easy navigation.
- **Detailed Examples**: Covers core functions and real-world applications.
- **Practical Notes**: Helpful for coding interviews and contests.

---
