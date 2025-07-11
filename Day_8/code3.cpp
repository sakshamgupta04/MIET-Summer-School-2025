// Implement a function to delete a series of nodes
// deleteSeries( head, 2, 5 )
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

// BRUTE FORCE METHOD
// void deleteRange(node* head, int s, int e)
// {
//     node* end = head;
//     int i=0;
//     while(i != e-1)
//     {
//         end = end->next;
//         i++;
//     }
//     node* start = head;
// }

void deleteSeries(node* head, int s, int e)
{
    node* end_position = head;
    int i=0;

    while( end_position && i<s )
    {
        end_position = end_position->next;
        i++;
    }

    while( end_position && i <= e )
    {
        node* temp = end_position;
        end_position = end_position->next;

        if( temp -> prev )
        {
            temp->prev->next = end_position;
        }

        else
        {
            head = end_position;
        }

        if(end_position)
        {
            end_position->prev = temp->prev;
        }
        delete temp;
        i++;
    }
}

int main()
{
    node* head = new node(10);

    insertTail( head, 20 );
    insertTail( head, 30 );
    insertTail( head, 40 );
    insertTail( head, 50 );

    deleteSeries( head, 2, 5 );

    return 0;
}