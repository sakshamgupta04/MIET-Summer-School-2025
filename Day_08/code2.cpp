// Delete at Specific Position in a linked list
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

void deleteAtPosition(node* head, int pos)
{
    node* temp = head;
    int i=0;
    while(i != pos-1)
    {
        temp = temp->next;
        i++;
    }

    node* todelete = temp->next;
    todelete->next->prev = temp;
    temp->next = todelete->next;

    delete todelete;
}

int main()
{
    node* head = NULL;
    return 0;
}