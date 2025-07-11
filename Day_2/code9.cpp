#include<iostream>

using namespace std;

int main()
{
    int num1 = 20;
    int num2 = 30;

    int *ptr = &num1;

    cout<<ptr<<endl; // Address of num1
    ptr++;
    cout<<ptr<<endl; // Address next to the address of num1 i.e +4 to the previous address (As int = 4 byte)

    return 0;
}