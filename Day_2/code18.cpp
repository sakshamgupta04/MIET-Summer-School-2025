#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    vector<vector<int>> v;  // 2D vector (3x3 matrix)
    int value;

    cout << "Enter elements for a 3x3 matrix:\n";

    for (int i = 0; i < 3; i++) 
    {
        vector<int> row;
        for (int j = 0; j < 3; j++) 
        {
            cin >> value;
            row.push_back(value);  // Add element to row
        }
        v.push_back(row);  // Add row to matrix
    }

    cout << "\nMatrix is:\n";
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            cout << v[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
