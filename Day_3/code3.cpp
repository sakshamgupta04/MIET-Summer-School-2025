#include<iostream>
using namespace std;

void func(int num)
{
    if(num==0)
        return;
    std::cout<<num<<std::endl;
    func(num-1);
}
int main()
{
    func(10);
    return 0;
}