#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    cout<<"a: "<<a<<endl;

    //int &r; // Error

    int &r = a;
    r=7;
    cout<<"r: "<<r<<endl;
    cout<<"a: "<<a<<endl;
    return 0;
}