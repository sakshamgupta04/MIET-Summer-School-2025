#include<iostream>
using namespace std;

int BinarySearch(int arr[], int target, int e)
{
    int s = 0;
    while(s<=e)
    {
        int mid = (s+e) / 2;
        if(arr[mid] == target)
            return mid;

        else if(arr[mid] < target)
            s = mid+1;

        else
            e = mid-1;
    }
    return -1;
}
int main()
{
    int arr[7] = {14, 18, 34, 59, 66, 91, 99};
    int index = BinarySearch(arr, 18, 6);
    cout<<index<<endl;
    return 0;
}

