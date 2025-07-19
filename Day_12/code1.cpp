#include<iostream>
using namespace std;

#define size 5

class myStack
{
    public:
        int arr[size];
        int ptr = -1;

        void push(int);
        void pop();
        int top();
        bool empty();
};

bool myStack::empty()
{
    if( ptr == -1 )
    {
        return true;
    }

    else
    {
        return false;
    }
}

int myStack::top()
{
    if( ptr == -1)
    {
        cout<<"Stack is empty..."<<endl;
        return -1;
    }

    return arr[ptr];
}

void myStack::push(int val)
{
    if( ptr == size-1)
    {
        cout<<"Stack Overflow..."<<endl;
        return;
    }

    ptr++;
    arr[ptr] = val;
}

void myStack::pop()
{
    if( ptr == -1 )
    {
        cout<<"Stack Underflow..."<<endl;
        return;
    }

    ptr--;
}

int main()
{
    myStack s;

    s.push( 10 );
    s.push( 20 );
    s.push( 30 );
    s.push( 40 );
    s.push( 50 );
    //s.push( 60 );  Stack Overflow

    while( !s.empty() )
    {
        cout<< s.top() <<" ";
        s.pop();
    }

    return 0;
}