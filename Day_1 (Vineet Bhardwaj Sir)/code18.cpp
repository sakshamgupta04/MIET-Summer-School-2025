/* Write a program to find the intersection of two vectors.*/
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int n1, n2, value;
    vector<int> vec1, vec2;
    unordered_set<int> set1, intersection;

    // Input first vector
    cout << "Enter number of elements in vector 1: ";
    cin >> n1;
    cout << "Enter " << n1 << " elements:\n";
    for (int i = 0; i < n1; i++) {
        cin >> value;
        vec1.push_back(value);
        set1.insert(value); // store in set for quick lookup
    }

    // Input second vector
    cout << "Enter number of elements in vector 2: ";
    cin >> n2;
    cout << "Enter " << n2 << " elements:\n";
    for (int i = 0; i < n2; i++) {
        cin >> value;
        vec2.push_back(value);
        if (set1.count(value)) {
            intersection.insert(value); // if exists in set1, it's a common element
        }
    }

    // Display intersection
    cout << "\nIntersection of the two vectors:\n";
    if (intersection.empty()) {
        cout << "No common elements.\n";
    } else {
        for (int x : intersection) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}