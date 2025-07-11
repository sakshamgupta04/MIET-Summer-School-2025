/* Write a program find the sum of all elements in an vector*/
#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    vector<int> v;
    int n, value, sum = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";

    for (int i = 0; i < n; i++) 
    {
        cin >> value;
        v.push_back(value);  
        sum += value;             
    }

    cout << "\nSum of all elements = " << sum << endl;

    return 0;
}