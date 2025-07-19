/* Write a program to print student detail, roll and cgpa. note: intialize roll and cgpa using constructor and print this detail via display function. Roll and cgpa must be data member of btech class*/

#include <iostream>
using namespace std;

class BTech 
{
    int roll;
    float cgpa;

    public:
    BTech() 
    {
        roll = 41;
        cgpa = 8.5;
    }

    void display() 
    {
        cout << "Roll Number: " << roll << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {

    BTech student;
    student.display();
    return 0;
}
