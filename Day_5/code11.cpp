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

    float bolo = 22.97;
    helloptr = &bolo;
    //*helloptr = 11.9; // Pointer to a Const

   return 0;
}
