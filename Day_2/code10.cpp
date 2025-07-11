#include<iostream>

using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    int i = 0;

    // while( i != 5)
    // {
    //     cout << &arr[i] << endl;
    //     i++;
    // }

    while( i != 5)
    {
        cout << *arr+1 << endl;
        i++;
    }
    return 0;
}