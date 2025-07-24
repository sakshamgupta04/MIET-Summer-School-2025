QUEUE:
    Queue is a linear data structure that stores the data in First In First Out Order.
    Example:
        Printing pages in printer.
        Downloading files in some applications.

    Operations implemented on queue:
        1. enqueue():
            Adding an element to the end of the queue.

        2. dequeue():
            Removing an element from the front of the queue.

        3. front():
            Retrieving the element at the front of the queue without removing it.

        4. rear():
            Retrieving the element at the rear of the queue without removing it.

        5. empty(): Return true if queue is empty, otherwise it returns true.

ASYMPTOTIC NOTATION:
    The time complexity of an algorithm quantifies the amount of time taken by a program to run as a function of length of the input.

Queue is defined inside <queue> header file.

There are mainly five types of queue:

    1. Simple queue (Linear Queue):

    2. Circular queue:
        The last position is connected back to the first to make a circle.
        It prevents wastage of space in a linear Queue.

    3. Prority queue:
        Elements are based on priority, not just an order.
        Higher priority elements are dequeued before lower ones.

    4. Double ended queue (Dequeue):
        Insertion and deletion can happen at both ends( front and rear).

        1. Input Restricted Queue:
            Input at only one end.

        2. Output Restricted Queue:
            Deletion from only one end.

SEARCHING:
    Search elements in a given data structure.

    There are mainly 2 types of searching algorithm:

        1. Linear Search:
            Searching element one by one.
            Complexity: O(n)

            Algorithm:
                1. Start from the first element.
                2. Compare each element with the target.
                3. If a match is found, return the index.
                4. If end is reached without a match, return -1 (not found).


        2. Binary Search:
            Divide and conquere on sorted array.
            Steps:
                Compare middle --> Move left or right
            Complexity: O (logn)

            Array must be sorted.

SORTING:
    Arranging array elements in increasing or decreasing order is called sorting.

1. Selection Sort:

    Algorithm:
        1. Start from the first element.
        2. Find the smallest element in the unsorted part of the array.
        3. Swap it with the first element of the unsorted part.
        4. Move the boundary of the sorted part by one.
        5. Repeat until the entire array is sorted.

    Complexity:
        - Best Case: O (n^2)
        - Avg Case: O (n^2)
        - Worst Case: O (n^2)

2. Bubble Sort:

    Algorithm:
        1. Start from the first element.
        2. Compare each pair of adjacent elements.
        3. If the left element is greater, swap them.
        4. Repeat the process for all elements.
        5. After each pass, the largest element bubbles to the end.
        6. Continue for n-1 passes or until no swaps are needed.

    Complexity:
        - Best Case: O (n)
        - Worst Case: O (n^2)
        - Avg Case: O (n^2)

3. Insertion Sort:
    Insertion Sort is a simple comparison-based sorting algorithm. It builds the final sorted array on element at a time, just like how you sort card in your hand.

    Algorithm:
        1. Start from the second element (index 1).
        2. Compare it with the elements before it.
        3. Shift the larger elements one position to the right.
        4. Insert the current element at its correct position.

    Complexity:
        1. Best Case: O(n)
        2. Avg Case: O(n^2)
        3. Worst Case: O(n^2)


4. Merge Sort:
    Merge Sort is a divide and conquer algorithm that:
        1. Divides the input array into two halves.
        2. Recursively sort them
        3. Merges the sorted halfs to produce the final sorted array.

    Algorithm:
        1. Divide the array into two halfs until each subarray has 1 element.
        2. Conquer by recursively sorting the subarrays.
        3. Combine by merging two sorted arrays into one.

    Time Complexity:
        Best Case: O( n log n )
        Avg Case: O( n log n )
        Worst Case: O( n log n )

    Space Complexity:
        O(n) in every case

5. Quick Sort:
    - Quick Sort is a divide and conquer sorting algorithm.
    - It picks an element as a pivot and paritions the array around the pivot.

    Algorithm:
        1. Choose a pivot (usually the last element in array).
        2. Parition the array:
            1. Move all element smaller than pivot to left.
            2. Move all element greater than pivot to right.
        3. Place the pivot in its correct position.
        4. Recursively apply the same logic to the left and right subarrays.

    Time Complexity:
        - Best Case: O( n log n )
        - Avg Case: O( n log n )
        - Worst Case: O( n^2 )

    Space Complexity:
        O(log n)


TREE: Tree data structure is a hierarchical structure that consists of nodes connected by edges. It is a widely used abstract data type that simulates a hierarchical
tree stucture, with root value and subtrees of childrens.

Node:Each element in a tree is called a node. It contains a value or data.

Root:The topmost node in a tree is called the root. It is the only node that has no parent.

Edge: The connection between two nodes is called an edge.

Child: A node that is directly connected to another node which moving away from the root is called child.

Parent: A node that has one or more child nodes is called a parent.

Leaf: A node that does not have any child is called a leaf or terminal node.

Subtree: A subtree consists of a node and all of its descendants.

Depth: The depth of a node is the number of edges from the root to the node.

Height: The height of a node is the number of edges on the longest path from the node to a leaf.

Level: The level of a node is the number of edges on the path from the root to the node.


TREE TRAVERSING:
    There are mainly two types of traversing in a tree:
        1. DFS: Depth-First Search it explores as far as possible along each branch before backtracking.

        2. BFS: Breath First Search explores neighbors before moving to the next level, typically using queue.

    In DFS they are of three types:
        1. Pre-Order Traversal
        2. In-Order Traversal
        3. Post-Order Traversal

BINARY TREE:
    A type of tree where each node has atmost 2 children.

BALANCED TREE:
    A tree where the height of the two subtree of any node differes by atmost one.

BINARY SEARCH TREE( BST ):
    A binary tree where each node ahs a value, and the left subtree of a node contains only nodes with values less than the nodes value, and the right subtree
    contains only nodes with value greater than the nodes value.

PROPERTIES OF BINARY TREE:
    - Maximum node at level L = 2^L
    - Maximum node in a tree of height H is 2H-1

BALANCE FACTOR:
    Difference between height of left subtree and height of right subtree is called balanced factor.

    - Balanced Factor: h(L-Tree) - h(R-Tree)

AVL TREE:
    A non empty binary tree T is an AVL Tree if givesn TL and TR to be the left and right subtrees of T and h(TL) and h(TR) to be the heights of subtrees TL and TR respectively.

    - For AVL tree the balance factor of a node can be either -1, 0 and 1.
    - An empty binary tree is an AVL tree.
    - An AVL tree always be a binary search tree and balanced too.
    - This tree was introduced by Adeslon Velsky and Landis (AVL).
    - In BST and AVL tree typically duplicate elements are not allowed.

    - To solve RR-imbalance we need to use Left Rotation.
    - To solve LL-Imbalance we need to use Right Rotation.




MAP:
    In C++ STL, a map is a container that stores element in key-value pairs. It is part of the Standard Template Library (STL) and is based on self-balancing binary search
    trees (also known as Red-Black Tree).

        - Each key is unique.
        - Automatically stores keys in sorted (aascending) order.
        - Define inside header file <map>

    Complexity:
        Insertion: O(log n)
        Deletion: O(log n)
        Access: O(log n)
        Search: O(log n)
        Traversal: O( n )

#Functions:
    1. Insert( {key, value} )
    2. Erase(k),    k is key
    3. Find(k)
    4. Clear(),     Remove all elements
    5. Size(),      Return number of elements
    6. Empty(),     Check if map is empty

UNORDERED MAP:
    1. It is an associative container that stores elements as key-value pairs.
    2. Unlike map, it does not maintain any order of keys.
    3. It uses a hash table for fast access.
    4. Keys must be unique
    5. It define inside <unordered_map> header file.

Complexity:
    Insertion: O(1)
    Deletion:  O(1)
    Access:    O(1)
    Search:    O(1)

Sometimes when all keys collide and end up in a single bucket in this case complexity will be O(n).

What is Greedy Algorithm?
    A Greedy Algorithm is an approach for solving problems by making the locally optimal choice at each step, with the hope that these local choices will lead to a globally
    optimal solution.

    In Other Words:
        Take the best possible choice at the current moment -- repeat -- until the problem is solved.

Greedy Choice Properties:
    - The problem has the Greedy choice property.
    - The problem has Optimal Substructure.
    - You need an efficient solution (usually faster than brute force or DP).

Optimal Substructure:
    A problem has an optimal solution that contains optimal solutions to its subproblems.

Example:
    1. You are given a list of activities with start and end time array. Select the max number of activities that dont overlap.
    - Always pick the activity that finishes earlier.
