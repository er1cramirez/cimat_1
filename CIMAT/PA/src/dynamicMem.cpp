//In this code we will see how to allocate memory dynamically using the C++ language.
//We will use the new operator to allocate memory dynamically.
//We will also see how to free the memory allocated dynamically using the delete operator.
//We will also see how to use the new operator to allocate memory for an array.
//We will also see how to free the memory allocated for an array using the delete operator.

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int *p = new int; // allocate memory for an integer
    *p = 10;          // put 10 in that memory location
    cout << *p << endl;
    delete p; // free the memory allocated for the integer

    int *q = new int[10]; // allocate memory for an array of 10 integers
    for (int i = 0; i < 10; i++)
    {
        q[i] = i;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << q[i] << " ";
    }
    cout << endl;
    delete[] q; // free the memory allocated for the array

    return 0;
}

