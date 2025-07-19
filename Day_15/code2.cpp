#include <iostream>
#define size 5
using namespace std;

class Deque 
{
public:
    int arr[size];
    int f = -1;
    int r = -1;

    bool isEmpty() 
    {
        return f == -1;
    }

    bool isFull() 
    {
        return (f == 0 && r == size - 1) || (f == r + 1);
    }

    void insertFront(int val) 
    {
        if (isFull()) 
        {
            cout << "Deque is full\n";
            return;
        }

        if (isEmpty()) 
        {
            f = r = 0;
        } else if (f == 0) 
        {
            f = size - 1;
        } else 
        {
            f--;
        }

        arr[f] = val;
    }

    void insertRear(int val) 
    {
        if (isFull()) 
        {
            cout << "Deque is full\n";
            return;
        }

        if (isEmpty()) 
        {
            f = r = 0;
        } else if (r == size - 1) 
        {
            r = 0;
        } else 
        {
            r++;
        }

        arr[r] = val;
    }

    void deleteFront() 
    {
        if (isEmpty()) 
        {
            cout << "Deque is empty\n";
            return;
        }

        if (f == r) 
        {
            f = r = -1;
        } else if (f == size - 1) 
        {
            f = 0;
        } else 
        {
            f++;
        }
    }

    void deleteRear()
    {
        if (isEmpty()) 
        {
            cout << "Deque is empty\n";
            return;
        }

        if (f == r) 
        {
            f = r = -1;
        } 

        else if (r == 0) 
        {
            r = size - 1;
        } 

        else 
        {
            r--;
        }

    }

    int getFront() 
    {
        if (isEmpty()) 
        {
            cout << "Deque is empty\n";
            return -1;
        }
        return arr[f];
    }

    int getRear() 
    {
        if (isEmpty()) 
        {
            cout << "Deque is empty\n";
            return -1;
        }
        return arr[r];
    }

    void display() 
    {
        if (isEmpty()) 
        {
            cout << "Deque is empty\n";
            return;
        }

        int i = f;
        while (true) 
        {
            cout << arr[i] << " ";
            if (i == r) break;
            i = (i + 1) % size;
        }
        cout << "\n";
    }
};

int main() 
{
    Deque dq;

    dq.insertFront(10);
    dq.insertFront(20);
    dq.insertFront(30);
    dq.insertRear(40);
    dq.deleteFront();
    dq.insertFront(60);

    dq.display();

    cout << "Front element: " << dq.getFront() << endl;
    cout << "Rear element: " << dq.getRear() << endl;

    return 0;
}
