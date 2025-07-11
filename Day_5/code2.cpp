#include<iostream>
using namespace std;

int main()
{
    int a=5;
    a=5;
    int *p;

    cout<<p<<endl; // Garbage
    cout<<a<<endl; // 5

    p=&a;
    *p=7;

    cout<<*p<<endl; // 7
    cout<<a<<endl; // 7

    int **px;
    px=&p;

    cout<<*px<<endl; // Address of a

    **px=*p+**px-11;

    cout<<**px<<endl; // 3
    cout<<px<<endl; // Address of p

    int ***pa=&px;
    **px=***pa**p***px*2;

    cout<<pa<<endl; // Address of px
    cout<<a<<endl; // 54
    cout<<*pa<<endl; // Address of p
    cout<<**pa<<endl; // Address of a
    cout<<**px<<endl; // 54
    cout<<***pa<<endl; // 54

    return 0;
}