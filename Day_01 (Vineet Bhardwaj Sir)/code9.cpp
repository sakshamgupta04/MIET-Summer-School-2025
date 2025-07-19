#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};

    int i=0;

    while(i != v.size())
    {
        cout<<v[i++]<<" ";
    }
    
    return 0;
}