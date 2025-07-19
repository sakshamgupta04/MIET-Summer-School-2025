//WA Template program function called TotalCOunt that takes an array, its size and a value of any data-type as parameters.
//The function should return the number of times the value appears in the array

#include<iostream>
using namespace std;

template <typename T, typename U, typename V>

int Func(T a, U n, V k)
{
    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i] == k){
        count++;
    }
    }
    return count;
}

int main()
{
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int value;
    int arr[n];
    cout<<"Enter elements in the array: "<<endl;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter value you want to find: "<<endl;
    cin>>value;000
    int result = Func(arr, n, value);

    cout<<"The value "<<value<<" has appeared "<< result <<" times. "<<endl;

    char ar[5] = {'a', 'i', 'p', 'i', 'o'};
    cout<<"Count is: "<<Func(ar, n, 'i');
    return 0;
}
