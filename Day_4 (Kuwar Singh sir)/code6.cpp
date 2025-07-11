// Outside Class Method
#include<iostream>
using namespace std;

class Data
{
    public:
        void Greet()
        {
            cout<<"Hello, Bolo.."<<endl;;
        }
        void negGreet(void);
};

void Data::negGreet()
{
    cout<<"Hello, mat bolo.."<<endl;
}

int main()
{
    Data acc; // Default Constructor
    acc.Greet();
    acc.negGreet();

    return 0;
}