#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q1;

    q1.push( 10 );
    q1.push( 20 );
    q1.push( 30 );
    q1.push( 40 );
    q1.push( 50 );
    q1.push( 60 );

    cout<< q1.front() << endl; // 10
    cout<< q1.back() << endl; // 60

    q1.push( 70 );
    q1.pop();

    cout<< q1.front() << endl; // 20
    cout<< q1.back() << endl; // 70

    return 0;
}