#include<iostream>
using namespace std;

void sum(int num)
{
    static int s=0;
    if(num==0)
    {
        cout<<"Sum is: "<<s;
        return;
    }
    s+=num;
    sum(num-1);
}

int main()
{
    sum(5);
}