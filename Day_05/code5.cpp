#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Data
{
    int a;
    double b;
};

struct Data acc;

int main()
{
    acc.a = 10;
    acc.b = 13.23;
    cout<<acc.a;
    return 0;
}