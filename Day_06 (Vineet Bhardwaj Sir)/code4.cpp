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

void insertTail(node* head, int value)
{
    node *temp = head;
    node* newnode = new node;

    if( head == NULL)
    {
        newnode->data = value;
        newnode->next = NULL;
        head = newnode;
        return;
    }

    while(temp->next != NULL)
    {
        temp = temp->next;
    } 

    newnode->data = value;
    newnode->next = NULL;
    temp->next = newnode;
}

int main()
{
    node *n1 = new node;
    n1->data = 10;
    n1->next = NULL; 

    insertTail(n1, 20);
    insertTail(n1, 30);
    insertTail(n1, 40);
    insertTail(n1, 50);

    print( n1 );

    return 0;
}