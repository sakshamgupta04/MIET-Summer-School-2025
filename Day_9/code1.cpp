// Doubly Circular Linked List
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

int main()
{
    node* head = new node(10);
    head->prev = head;
    head->next = head;

    node* n2 = new node(20);
    n2->next = head;
    n2->prev = head;
    head->next = n2;
    head->prev = n2;

    node* n3 = new node(30);
    n3->next = head;
    n3->prev = n2;
    n2->next = n3;
    head->prev = n3;

    node* n4 = new node(40);
    n4->next = head;
    n4->prev = n3;
    n3->next = n4;
    head->prev = n4;

    print (head);

    return 0;
}