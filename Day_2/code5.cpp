#include<iostream>
using namespace std;

void func(int num)
{
    num=10;
}

int main()
{
    int num = 20;
    cout<<num<<endl; //20

    func(num);

    cout<<num<<endl; //20

    return 0;
}