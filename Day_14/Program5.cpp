#include<iostream>
using namespace std;

void SelectionSort(int arr[], int size)
{
    for(int i=0; i<size-1; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if( arr[i] > arr[j] )
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int arr[6] = {10, 19, 13, 18, 17, 14};

    SelectionSort(arr, 6);

    int i=0;
    while(i != 6)
    {
        cout<<arr[i]<<" ";
        i++;
    }
    return 0;
}
