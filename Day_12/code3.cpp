#include<iostream>
using namespace std;

class Stack 
{
public:
    class node 
    {
    public:
        int data;
        node* next;

        node(int val): data(val), next(NULL) {}
    };

    node* top;

    Stack(): top(NULL) {}

    void push(int val) 
    {
        node* newNode = new node(val);
        newNode->next = top;
        top = newNode;
        cout << val << " pushed onto the stack.\n";
    }

    void pop() 
    {
        if (empty()) 
        {
            cout << "Stack Underflow! Cannot pop.\n";
            return;
        }

        node* temp = top;
        top = top->next;
        cout << "Popped element: " << temp->data << endl;
        delete temp;
    }

    void topEle() 
    {
        if (empty()) 
        {
            cout << "Stack is empty.\n";
            return;
        }
        cout << "Top element is: " << top->data << endl;
    }

    void display() 
    {
        if (empty()) 
        {
            cout << "Stack is empty.\n";
            return;
        }

        node* temp = top;
        cout << "Stack elements (top to bottom): ";
        
        while (temp) 
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Check if stack is empty
    bool empty() 
    {
        return top == NULL;
    }
};

int main() 
{
    Stack s;
    
    s.push(10);
    s.push(20);
    s.push(30);
    
    s.display();
    
    s.topEle();

    s.pop();
    s.display();

    s.pop();
    s.pop();
    s.pop(); // underflow check

    return 0;
}
