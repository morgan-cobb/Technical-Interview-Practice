#### Overview of Data Structures

1. Arrays
2. Vectors
3. Stacks & Queus
4. Linked Lists
5. Maps
6. Trees
7. Graphs

### 1. Arrays
# Description:
An array is a collection of elements of the same type, stored in contiguous memory locations. Arrays allow direct access to elements using an index.

# Key Operations:
- Access: arr[index] gives direct access to an element (O(1)).
- Insertion/Deletion: Requires shifting elements, making these operations O(n) in the worst case.
# Use Cases:
- When you need fast access by index.
- When you know the fixed size of data.

2. Vectors
Description:
A vector is a dynamic array that can change its size during runtime. It is part of the Standard Template Library (STL) in C++.

# Key Operations:
- Access: Similar to arrays, access by index is O(1).
- Insertion/Deletion: Adding/removing at the end is O(1), but adding/removing from the middle involves shifting elements, making it O(n).
# Use Cases:
- When the size of data can vary.
- When frequent insertion/removal at the end is needed

### 3. Stacks
Description:
A stack is a LIFO (Last-In-First-Out) data structure. The last element added is the first one to be removed. Stacks can be implemented using arrays, vectors, or linked lists.

# Key Operations:
- Push: Add an element to the top (O(1)).
- Pop: Remove the top element (O(1)).
- Peek: View the top element without removing it (O(1)).
# Use Cases:
- Function call stack.
- Undo mechanisms in software.
- Depth-First Search (DFS) in graphs.

### 4. Queues
Description:
A queue is a FIFO (First-In-First-Out) data structure. Elements are added to the back and removed from the front.

# Key Operations:
- Enqueue (Push): Add an element to the back (O(1)).
- Dequeue (Pop): Remove an element from the front (O(1)).
- Front: Access the front element without removing it (O(1)).
# Use Cases:
- Task scheduling.
- Breadth-First Search (BFS) in graphs.
- Order processing systems.

### 5. Maps
# Description:
A map is a collection of key-value pairs where each key is unique. In C++, there are two main types: ordered maps (std::map) and unordered maps (std::unordered_map).
# Key Operations:
- Insert, Access, Delete:
- Ordered Map: O(log n) due to tree-based structure.
- Unordered Map: O(1) average, O(n) worst-case due to hash collisions.
# Use Cases:
- Lookup tables.
- Caching.
- Storing unique keys with associated values.

### 6. Trees
# Description:
A tree is a hierarchical data structure made up of nodes connected by edges. A tree starts at the root and branches out to children. A popular type is the Binary Search Tree (BST), where each node has at most two children and left children are less than the root while right children are greater.
# Key Operations:
- Insertion: Place elements while maintaining structure (O(log n) for balanced trees).
- Traversal:
- In-order: Left, Root, Right.
- Pre-order: Root, Left, Right.
- Post-order: Left, Right, Root.
# Use Cases:
- Searching and sorting data (BST).
- Hierarchical data representation like organizational charts.
- Expression parsing (syntax trees).

### 7. Graphs
# Description:
A graph is a collection of nodes (vertices) connected by edges. Graphs can be directed (edges have a direction) or undirected. Graphs are used to represent complex relationships between entities.

# Representations:
- Adjacency List: Lists of neighbors for each vertex.
- Adjacency Matrix: A 2D array representing connections between nodes

# Key Operations:
- Add Edge: O(1) for adjacency list, O(1) for adjacency matrix.
Traversal:
- Depth-First Search (DFS): Recursively visit nodes.
- Breadth-First Search (BFS): Use a queue to explore neighbors level by level.
# Use Cases:
- Social networks (connections between people).
- Navigation systems (nodes as locations, edges as paths).
- Dependency graphs (task scheduling).

