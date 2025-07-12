#include<iostream>
#define SIZE 5

using namespace std;

int arr[SIZE];
int top = -1;

void push(int value) {
    if (top == SIZE - 1) {
        cout << "Overflow" << endl;
        return;
    }
    top++;
    arr[top] = value;
    cout << value << " pushed into stack." << endl;
}

void pop() {
    if (top == -1) {
        cout << "Underflow" << endl;
        return;
    }
    cout << arr[top] << " popped from stack." << endl;
    top--;
}

void display() {
    if (top == -1) {
        cout << "Stack is empty." << endl;
        return;
    }
    cout << "Stack elements: ";
    for (int i = top; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int choice, val;
    while (true) {
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> val;
                push(val);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice" << endl;
        }
    }
}
