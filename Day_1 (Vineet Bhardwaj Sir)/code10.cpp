#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.pop_back();
    v.pop_back();

    while( ! v.empty() )
    {
        cout<<v[ v.size()-1]<<" ";
        v.pop_back();
    }
    return 0;
}