#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    // Function pointer declaration for functions taking (int, int) and returning int
    int (*ptr) (int, int);

    // Assign the address of 'add' function to the pointer
    ptr = add;

    int x = 5, y = 7;

    // Call using function pointer
    int result1 = ptr(x, y);

    // Call using function directly
    int result2 = add(x, y);

    cout << "Using function pointer: " << result1 << endl;
    cout << "Using direct function call: " << result2 << endl;

    return 0;
}
