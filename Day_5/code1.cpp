#include<iostream>
using namespace std;

class Data
{
    public:
        string name;
        int age;

        // Copy Constructor
        Data(string name, int age)
        {
            this->name=name;
            this->age=age;
        }

        // Custom Copy Constructor
        Data(Data &custom)
        {
            this->name=custom.name;
            this->age=custom.age;
        }

        // Print Information
        void printDetails(void)
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }
};

int main()
{
    Data M1("Saksham", 20);
    M1.printDetails();

    Data Copy(M1);  // Default Copy Constructor
    Copy.printDetails();
    return 0;
}