/*Finding all possible sub array of given vector elements*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr;
    int n, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        arr.push_back(value);
    }

    cout << "\nAll possible subarrays are:\n";

    // Generate all subarrays
    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            // Print elements from start to end
            for (int i = start; i <= end; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}