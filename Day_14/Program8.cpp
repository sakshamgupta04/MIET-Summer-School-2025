#include<iostream>
using namespace std;

void BubbleSort(int arr[], int s,int i =0)
{
 if(i == s-1)
  return;
 for(int j=0; j<s-i-1; j++)
  {
   if(arr[j]>arr[j+1])
   swap(arr[j],arr[j+1]);
  }
 BubbleSort(arr,s, i+1);
}

int main()
{
    int arr[6] = {10, 19, 13, 18, 17, 14};

    BubbleSort(arr, 6);

    int i=0;
    while(i != 6)
    {
        cout<<arr[i]<<" ";
        i++;
    }
    return 0;
}
