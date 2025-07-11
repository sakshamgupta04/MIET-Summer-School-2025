#include<iostream>
using namespace std;

int main()
{
    char *ptr[3] = {"We", "are", "coders"};

    cout<<ptr<<endl; //0x61ff04

    cout<<*ptr<<endl; //We
    cout<<*(ptr+1)<<endl; //are
    cout<<*(ptr+2)<<endl; //coders
    
    cout<<*(ptr+2)+3<<endl; //ers

    return 0;
}