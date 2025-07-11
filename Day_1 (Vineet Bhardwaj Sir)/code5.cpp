#include <iostream>
using namespace std;

class Student {
    string name;
    int roll;
    float cgpa;

public:
    void getdata();   // Declare inside class
    void putdata();   // Declare inside class
};

// Define getdata() outside class
void Student::getdata() {
    cin.ignore();  // Clear buffer before getline
    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter CGPA: ";
    cin >> cgpa;
}

// Define putdata() outside class
void Student::putdata() {
    cout << "\nStudent Details:\n";
    cout << "Name: " << name << endl;
    cout << "Roll Number: " << roll << endl;
    cout << "CGPA: " << cgpa << endl;
}

int main() {
    Student s1, s2;

    cout << "Enter details for Student 1:\n";
    s1.getdata();

    cout << "\nEnter details for Student 2:\n";
    s2.getdata();

    cout << "\nDisplaying Student Data:\n";
    s1.putdata();
    s2.putdata();

    return 0;
}
