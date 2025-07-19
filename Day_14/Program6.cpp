#include<iostream>
using namespace std;

void SelectionSort(int arr[], int begin, int end)
{
    if(begin > end )
        return;

    int temp = begin;
    for(int i=begin; i<end; i++)
    {
        if(arr[i] < arr[temp])
            temp  = i;
    }
    swap ( arr[temp], arr[begin] );

    SelectionSort( arr, begin+1, end);
}

int main()
{
    int arr[6] = {10, 19, 13, 18, 17, 14};

    SelectionSort(arr, 0, 6);

    int i=0;
    while(i != 6)
    {
        cout<<arr[i]<<" ";
        i++;
    }
    return 0;
}
