// Doubly Circular Linked List  -- Insert at tail
#include<iostream>
using namespace std;

class node
{
    public:
        int data;
        node* prev;
        node* next;

        node(int d): data(d), prev(NULL), next(NULL) {}
};

void print(node* head)
{
    node* temp = head;

    while(temp->next != head)
    {
        cout<<temp->prev<<" "<<temp->data<<" "<<temp->next<<endl;
        temp = temp->next;
    }
    cout<<temp->prev<<" "<<temp->data<<" "<<temp->next<<endl;
}

void InsertAtTail(node* &head, int val)
{
    node* newnode = new node(val);

    if( head == NULL)
    {
        newnode->prev = newnode;
        newnode->next = newnode;

        head = newnode;
        return;
    }

    newnode->prev = head->prev;
    newnode->next = head;

    head->prev->next = newnode;
    head->prev = newnode;
}

int main()
{
    node* head = NULL;

    InsertAtTail( head, 10 );
    InsertAtTail( head, 20 );
    InsertAtTail( head, 30 );
    InsertAtTail( head, 40 );
    InsertAtTail( head, 50 );
    InsertAtTail( head, 60 );

    print (head);

    return 0;
}