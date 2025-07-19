#include<iostream>
using namespace std;

int LinearSearch(int arr[], int target)
{
    for(int i=0; i<7; i++)
    {
        if(arr[i] == target)
            return i;
    }
    return -1;
}
int main()
{
    int arr[7] = {14, 78, 34, 99, 12, 90, 77};
    int index = LinearSearch(arr, 20);
    cout<<index<<endl;
    return 0;
}
