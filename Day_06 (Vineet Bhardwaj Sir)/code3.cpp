#include<iostream>
using namespace std;

class node
{
    public:
        int data;
        node* next; //self referential pointer
};

void print( node* head )
{
    node* temp = head;
    while ( temp != nullptr )
    {
        cout<< temp->data <<" "<< temp->next <<endl;
        temp = temp->next;
    }
}

int main()
{
    node *n1 = new node;
    n1->data = 10;
    n1->next = NULL; 

    node* n2 = new node;
    n2->data = 20;
    n2->next = NULL;
    n1->next = n2;

    node * n3 = new node;
    n3->data = 30;
    n3->next = NULL;
    n2->next = n3;

    print( n1 );

    return 0;
}