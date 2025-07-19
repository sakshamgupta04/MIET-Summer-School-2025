#include<iostream>
using namespace std;

int main()
{
    char *ptr[3] = {"We", "are", "coders"};

    cout<<ptr[0]<<endl; // We
    cout<<&ptr[1]<<endl; // 4 ka gap leke address aaya.
    
    // int i=0;
    // while (i<3)
    // {
    //     cout<<*(ptr+i)<<endl;
    //     i++;
    // }

    return 0;
}