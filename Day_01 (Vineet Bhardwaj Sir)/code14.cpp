/*Write a program to find the largest elemetn in the vector.*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int n, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        v.push_back(value);
    }

    int largest = v[0];

    for (int i = 1; i < n; i++) {
        if (v[i] > largest) {
            largest = v[i];
        }
    }

    cout << "\nLargest element in the vector is: " << largest << endl;

    return 0;
}
