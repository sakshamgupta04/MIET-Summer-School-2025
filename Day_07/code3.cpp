#include<bits/stdc++.h>
using namespace std;

class btech
{
public:
    int sweets;
    static int stv; // Static Variable
};

int btech::stv = 2; // Global initialization is mandatory

int main()
{
    btech s1, s2;
    // s1.stv = 3;

    cout<< s1.stv<<endl;
    cout<< s2.stv<<endl;

    return 0;
}
