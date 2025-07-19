#include<iostream>
using namespace std;

int num = 10;

int main()
{
    int num = 20;
    int *ptr = &num; // ptr main num ka address store kr dega
    int &x = num;

    cout<<num<<endl; // 20
    //cout<<::num<<endl; // we need to use scope resolution operator to print global value
    cout<<ptr<<endl; // address of num
    
    cout<<*ptr<<endl; //20
    cout<<**(&ptr)<<endl; // 20
    //cout<<**(&num)<<endl; // Error

    cout<<*(&num)<<endl; // 20
    cout<<x<<endl; // 20

    cout<<&num<<endl; // Address of num
    cout<<ptr<<endl; // Address of num
    cout<<&x<<endl; // Address of num
    cout<<*(&ptr)<<endl; // Address of num

    return 0;
}