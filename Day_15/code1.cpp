#include<iostream>
using namespace std;

class ring
{
    class node
    {
    public:
        int data;
        node* next;

        node(int val): data(val), next(NULL) {}
    };

    node* top = NULL;

public:
    void push(int val)
    {
        node* newnode = new node(val);
        newnode->next = top;
        top = newnode;
    }

    void pop()
    {
        if(top == NULL)
        {
            cout << "No element inside Hanoi\n";
            return;
        }

        node* temp = top;
        top = top->next;
        delete temp;
    }

    int getTop()
    {
        if(top == NULL)
        {
            cout << "No element inside Hanoi\n";
            return -1;
        }
        return top->data;
    }

    void display()
    {
        node* temp = top;
        while(temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }

    bool empty()
    {
        return top == NULL;
    }
};

int main()
{
    ring h1;

    h1.push(10);
    h1.push(30);
    h1.push(45);
    h1.push(18);
    h1.push(19);
    h1.push(17);

    h1.display();

    cout << "Top element: " << h1.getTop() << endl;

    h1.pop();
    h1.pop();

    cout << "After popping two elements:\n";
    h1.display();

    return 0;
}
