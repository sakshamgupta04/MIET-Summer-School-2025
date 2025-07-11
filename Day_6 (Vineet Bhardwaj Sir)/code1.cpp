#include<iostream>
#include<stdlib.h>
using namespace std;

/* 
malloc(): it stands for memory allocation, it allocates memory dynamically.
- Allocates memory in bytes.
- We must pass number of bytes we need.
- Returns NULL on failure.
- Allocates contiguous memory.
- Returns void pointer, so needs typecasting.
*/

int main()
{
    int *ptr = (int *)malloc(sizeof(int) * 5);

    if(ptr != NULL)
    {
        cout << "Memory allocated successfully.\n";

        // Taking 5 inputs
        cout << "Enter 5 integers:\n";
        for(int i = 0; i < 5; i++)
        {
            cout<<"arr["<<i<<"]: ";
            // cin>>arr[i];
            cin >> *(ptr+i);
        }

        // Printing the 5 values
        cout << "You entered:\n";
        for(int i = 0; i < 5; i++)
        {
            cout << *(ptr+i) << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "Failed to allocate memory.\n";
    }

    free(ptr);  // Deallocate memory
    ptr = NULL; // Avoid dangling pointer

    return 0;
}