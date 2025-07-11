// Insert at Tail, Insert at Head, Delete at Tail, Delete at Head of doubly lined list
#include<iostream>
using namespace std;

class node
{
    public:
        int data;
        node* prev;
        node* next;

        node(int d): data(d), prev(NULL), next(NULL) {}  // Constructor used to initialize the node
};

void fprint(node* head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->prev<<"\t"<<temp->data<<"\t"<<temp->next<<endl;
        temp = temp->next;
    }
}

void insertTail( node* &head, int val)
{
    node* newnode = new node(val);
    
    if( head == NULL)
    {
        head = newnode;
        return;
    }

    node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    newnode->prev = temp;
    temp->next = newnode;
}

void insertHead(node* &head, int val)
{
    node* newnode = new node(val);
    if(head == NULL)
    {
        head = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void deleteTail(node* &head)
{
    node* temp = head;

    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }
    
    node* todelete = temp->next;
    temp->next = NULL;

    delete todelete;    
}

void deleteHead(node* &head)
{
    node* temp = head;

    if(temp->next == NULL)
    {
        return;
    }

    temp = temp->next;
    temp->prev = NULL;
    head = temp;
}

int main()
{
    node* head = new node(10);

    insertTail( head, 20 );
    insertTail( head, 30 );
    insertTail( head, 40 );
    insertTail( head, 50 );

    insertHead( head, 60 );
    insertHead( head, 70 );

    deleteTail( head );

    deleteHead( head );

    fprint(head);

    cout<<endl;

    return 0;
}