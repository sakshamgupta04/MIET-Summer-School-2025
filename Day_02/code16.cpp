// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     // int num1 = 12; // Static allocation
//     // int *num2 = new int; // Dynamic Allocation

//     // vector <int> v = {10, 20, 30, 40, 50}; // Static allocation
//     // vector <int> *v1 = new vector <int>; // Dynamic allocation

//     vector<int> v;
//     int value;

//     cout << "Enter 5 elements:\n";
//     for (int i = 0; i < 5; i++) 
//     {
//         cin >> value;
//         v.push_back(value);
//     }

//     cout << "\nElements in the vector:\n";
//     for (int i = 0; i < v.size(); i++) 
//     {
//         cout << v[i] << " ";
//     }

//     cout << endl;

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>* v1 = new vector<int>; // Dynamic vector allocation

    int value;
    cout << "Enter 5 elements:\n";
    for (int i = 0; i < 5; i++) {
        cin >> value;
        v1->push_back(value);  // Use -> to access member of pointer object
    }

    cout << "\nElements in the vector:\n";
    for (int i = 0; i < v1->size(); i++) {
        cout << v1->at(i) << " "; 
    }

    cout << endl;

    delete v1;  // Free memory
    return 0;
}
