//Problem 1

#include<iostream>
#include<stack>

using namespace std;

int main()
{
    int n;
    cout<<"Enter size of stack: "<<endl;
    cin>>n;
    stack<string> s;

    for(int i=0; i<n; i++)
    {
        string x;
        cin>>x;
        s.push(x);
    }

    while( !s.empty() )
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}

