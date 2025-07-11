#include<iostream>
using namespace std;

int main()
{
    int *ptr = nullptr;

    {
        int num = 20;
        ptr = &num;

        cout<<num<<endl; // 20
        cout<<ptr<<endl; // Address of num
    }

    // Ptr is now become dangling pointer
    cout<<*ptr<<endl; // 20
    cout<<ptr<<endl; // Address of num

    return 0;
}