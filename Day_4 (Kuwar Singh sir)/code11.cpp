#include<iostream>
using namespace std;

class Data
{
    private:
        int age;
        string name;
    public:
        Data(int age, string name)
        {
            this->age = age;
            this->name = name;
        }
        void getData(void)
        {
            cout<<"name: "<<endl;
            cin>>name;
            cout<<"age: "<<endl;
            cin>>age;
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
    // Data ac(20, "Saksham");
    // ac.Print();
    Data acc(20, "Saksham");
    acc.getData();
    acc.Print();
    return 0;
}