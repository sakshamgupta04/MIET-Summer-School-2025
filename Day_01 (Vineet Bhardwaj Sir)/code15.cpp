/*Write a program to reverse the elements of a vector*/
#include <iostream>
#include <vector>
#include <algorithm>  // for reverse()
using namespace std;

int main() {
    vector<int> numbers;
    int n, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) 
    {
        cin >> value;
        numbers.push_back(value);
    }

    // Reverse the vector using STL function
    reverse(numbers.begin(), numbers.end());

    cout << "\nReversed Vector:\n";
    for (int num : numbers) {
        cout << num << " ";
    }

    cout << endl;
    return 0;
}


// int main()
// {
//     vector<int> v = {23, 10, 24, 78, 89, 45};
//     for(int i=v.size()-1, j=0; j<i; i--,j++)
//     {
//         swap(v[i], v[j]);
//     }
//     for(auto i:v)
//         cout<<i<<" ";

//     return 0;
// }