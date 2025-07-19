#include<iostream>
using namespace std;

int LinearSearch(int arr[], int target, int i, int e)
{
    if(i > e)
        return -1;

    if(arr[i] == target)
        return i;

    LinearSearch(arr, target, i+1, e);
}

int main()
{
    int arr[7] = {14, 78, 34, 99, 12, 90, 77};
    int index = LinearSearch(arr, 99, 0, 6);
    cout<<index<<endl;
    return 0;
}
