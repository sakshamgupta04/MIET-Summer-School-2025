#include<bits/stdc++.h>
using namespace std;

class btech
{
public:
    int nonStatic;
    static int staticVar; // Static Variable

    btech(): nonStatic(10){}

    static void staticFun()
    {
        cout<<"I am static Method: "<<endl;
        cout<<"Static var: "<<staticVar<<endl; //2
        //cout<<" Non static var: "<<nonStatic<<endl; //10 // We cannot access a non static variable in static function
    }

    void nonStaticFunc()
    {
        cout<<"I am static Method: "<<endl;
        cout<<"Static var: "<<staticVar<<endl; //2
        cout<<"Non static var: "<<nonStatic<<endl; //10
    }
};

//void btech::staticFun();
int btech::staticVar = 2; // Global initialization is mandatory

int main()
{
    //btech s1, s2;
    // s1.stv = 3;

    //s1.nonStaticFunc();
    //s1.staticFun();

    //cout<< s1.stv<<endl;
    //cout<< s2.stv<<endl;

    return 0;
}
