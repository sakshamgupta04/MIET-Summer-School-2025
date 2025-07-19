// Constructor Overloading
#include<iostream>
using namespace std;

class Data
{
    public:
        int age;
        string name;
        Data()
        {
            cout<<"Hello, Bolo.."<<endl;;
        }
        Data(int a, string n = "Poor People")
        {
            age = a;
            name = n;
        }
        void Print(void);
};

void Data::Print()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}

int main()
{
    Data acc; 
    acc.Print();
    Data ac(20);
    ac.Print();
    return 0;
}