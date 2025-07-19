#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int *p; // Declared in the stack memory
    p = new int;
    //p = malloc(sizeof(int)*5);
    *p = 40;
    
    cout<<*p<<endl;
    delete p;

    return 0;
}