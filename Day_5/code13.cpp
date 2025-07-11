// Structure Pointer
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void fun(int n)
{
    if(n>0)
    {
        fun(n-1);
        cout<<n<<" ";
        fun(n-2);
        fun(n-3);
    }
}

int main()
{
    int x=5;
    fun(x);
    
    return 0;
}
