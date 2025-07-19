/* Write a program to take name, roll and cgpa of two student and print it.
note: Take data using  getdata() function and print it using putdata() function.*/

#include <iostream>
using namespace std;

class Student {
    string name;
    int roll;
    float cgpa;

public:
    void getdata() {
        cout << "Enter name: ";
        //cin >> name;
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void putdata() {
        cout << "\nStudent Details:\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    Student s1, s2;

    cout << "Enter details for Student 1:\n";
    s1.getdata();

    cout << "\nEnter details for Student 2:\n";
    s2.getdata();

    cout << "\n--- Displaying Student Information ---\n";
    s1.putdata();
    s2.putdata();

    return 0;
}
