#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v = {23, 10, 24, 78, 89, 45};

    cout<<v.front()<<endl;
    cout<<v.back()<<endl;

    cout<<*v.begin()<<endl; // return the reference of 0th index element
    cout<<*(v.end()-1)<<endl; // return the reference of just after the last element
    
    return 0;
}