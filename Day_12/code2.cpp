#include<array>
#include<iostream>
using namespace std;
#define size 5
template <typename a>
class myStack
{
	a stack[size];
	int top =-1;
	public:
		void push(a data);
		void pop()
        {
			if(top==-1)
            {
				cout<<"Stack underflow!\n";
				return;
			}
			top--;
		}
		a topElement()
		{
			if(top==-1)
            {
				cout<<"Stack underflow!\n";
				return stack[0];
			}
			return stack[top];
		}
		bool empty()
		{
			if(top==-1)
				return true;
			return false;
		}
	
};
template<typename a>
void myStack<a> :: push(a data)
{
			if(top==size-1)
            {
				cout<<"Stack overflow!\n";
				return;
			}
			stack[++top]=data;
}
int main(){
	myStack<int> st;
	st.topElement();
	st.push(8);
	st.push(6);
	st.push(4);
	st.push(2);
	st.push(0);
	st.push(10);
	while(!st.empty())
    {
		cout<<st.topElement()<<" ";
		st.pop();
	}
	return 0;
}