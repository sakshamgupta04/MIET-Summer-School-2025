#include <iostream>
#pragma pack(1)
using namespace std;

// Padding: It is a concept to add some extra byte of memory for better execution and it is done by the compiler.
class btech{
    int roll;
    double cgpa;
    char section;
};

int main()
{
    btech s1;
    cout<< sizeof(s1); // Multiple of the bigger datatype
    return 0;
}