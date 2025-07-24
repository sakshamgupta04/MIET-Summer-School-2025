#include<iostream>
#include<map>
using namespace std;

int main()
{
    map <string, int> mp;

    mp["Aryan"] = 5;
    mp["Anurag"] = 2;
    mp["Saksham"] = 9;

    mp.insert( { "Abhi", 1 } );

    for( auto i:mp )
    {
        cout<< i.first << "\t" << i.second << endl;
    }

    return 0;
}