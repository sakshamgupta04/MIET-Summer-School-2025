// Structure Pointer
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    const float hello = 3.14;
    const float *helloptr;
    helloptr = &hello;

    //*helloptr = 4.12; // hello pointer holds the value of hello which cannot be changed
    
    return 0;
}
