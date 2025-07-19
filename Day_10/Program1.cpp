#include<iostream>
using namespace std;

int sum(int a, int b)
{
    return a+b;
}

float sum(float a, float b)
{
    return a+b;
}

float sum(float a, int b)
{
    return a+b;
}

float sum(int a, float b)
{
    return a+b;
}

int main()
{
    cout<<"Sum: "<<sum(10, 10)<<endl;
    cout<<"Sum: "<<sum(10.5f, 10.5f)<<endl;
    cout<<"Sum: "<<sum(10.5f, 10)<<endl;
    cout<<"Sum: "<<sum(10, 10.5f)<<endl;
    return 0;
}
