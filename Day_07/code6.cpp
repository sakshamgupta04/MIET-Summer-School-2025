// Printing elements in a doubly lined list in reverse.
#include<iostream>
using namespace std;

class node
{
    public:
        int data;
        node* prev;
        node* next;

        node(int d): data(d), prev(NULL), next(NULL) {} // Constructor
};

void print(node*head)
{
    node* temp = head;

    // Using Brute Force
    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    while(temp != NULL)
    {
        cout<<temp->data<<"\t";
        temp = temp->prev;
    }
}

int main()
{
    node* n1 = new node(10);

    node* n2 = new node(20);
    n1->next = n2;
    n2->prev = n1;

    node* n3 = new node(30);
    n2->next = n3;
    n3->prev = n2;

    node* n4 = new node(40);
    n3->next = n4;
    n4->prev = n3;

    print(n1);

    return 0;
}
