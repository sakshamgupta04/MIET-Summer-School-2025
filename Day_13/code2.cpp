#include <iostream>
#define size 5

using namespace std;

class myQueue 
{
public:
    int arr[size];
    int f;
    int r;

    myQueue() : f(-1), r(-1) {}

    void push(int val) 
    {
        if (r == size - 1) 
        {
            cout << "Queue Overflow\n";
            return;
        }

        if( f == r)
        {
            f = r = 0;
        }

        else
        {
            r++;
        }

        arr[r] = val;
    }

    void pop() 
    {
        if (f == r) 
        {
            cout << "Queue Underflow\n";
            f = r = -1;
            return;
        }
        f++;
    }

    bool empty() 
    {
        if( f == r )
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int front() 
    {
        return arr[f];
    }

    int back() 
    {
        return arr[r];
    }

    void display() 
    {
        if (empty()) 
        {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue elements: ";
        for (int i = f; i <= r; i++) 
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() 
{
    myQueue q1;

    q1.push(10);
    q1.push(20);
    q1.push(30);

    q1.display();

    cout << "Front: " << q1.front() << endl;
    cout << "Back: " << q1.back() << endl;

    q1.pop();
    q1.display();

    q1.pop();
    q1.pop();
    q1.pop();  // This will show underflow

    return 0;
}
