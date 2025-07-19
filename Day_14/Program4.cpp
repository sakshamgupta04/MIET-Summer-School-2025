#include<iostream>
using namespace std;

int BinarySearch(int arr[], int target,int s, int e)
{
        int mid = (s+e) / 2;

        if(s>e)
            return -1;

        if(arr[mid] == target)
            return mid;

        else if(arr[mid] < target)
            BinarySearch(arr, target, mid+1, e);

        else
            BinarySearch(arr, target, s, mid-1);
}

int main()
{
    int arr[7] = {14, 18, 34, 59, 66, 91, 99};
    int index = BinarySearch(arr, 59, 0, 6);
    cout<<index<<endl;
    return 0;
}
