#include<iostream>
using namespace std;

class node
{
    public:
        int data;
        node* next; //self referential pointer
};

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

    // Manual Printing
    cout<< n1->data <<" -> "<< n1->next <<endl;
    cout<< n2->data <<" -> "<< n2->next <<endl;
    cout<< n3->data <<" -> "<< n3->next <<endl<<endl;

    // cout<< n1->data<<endl; // 10
    // cout<<n2->data<<endl; // 20
    // cout<<(n1->next)->data<<endl; // 20
    // cout<<n1->next->next<<endl<<endl; // Address of n3
    // cout<< n1->next->next->data<<endl; // 30
    // cout<<n2->next->data<<endl; // 30
    // cout<<n3->data<<endl; // 30

    // // Using Loop
    // while(n1 != NULL)
    // {
    //     cout<< n1->data<<" -> "<<n1->next<<endl;
    //     n1 = n1->next;
    // }

    return 0;
}