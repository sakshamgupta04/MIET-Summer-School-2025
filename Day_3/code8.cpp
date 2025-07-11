// WAP to search element in an array and return the index using recursion.

#include <iostream>
using namespace std;

int search(int arr[], int size, int n) 
{
    static int i=0;

    if(size==0)
        return -1;

    if(arr[0] == n)
        return i;

    i++;
    search(arr+1,size-1,n);
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(int);
    
    cout<<"Element at index: "<<search(arr, size, 4);

    return 0;
}


