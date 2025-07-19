#include<iostream>
using namespace std;

template <class T, class U>

void swap(T &a, U &b)
{
    auto temp = a;
    a = b;
    b = temp;
}

int main()
{
    {
        float a = 12.4;
        float b = 13.5;
        cout<<"Before Swapping"<<endl;
        cout<<"Value of a: "<<a<<" and Value of b: "<<b<<endl;
        swap(a,b);
        cout<<"After Swapping"<<endl;
        cout<<"Value of a: "<<a<<" and Value of b: "<<b<<endl;
    }
    {
        int a = 1.23;
        int b = 2.24;

        cout<<"a: "<<a<<" "<<"b: "<<b<<endl;
        swap(a,b);
        cout<<"a: "<<a<<" "<<"b: "<<b<<endl;
    }
}

