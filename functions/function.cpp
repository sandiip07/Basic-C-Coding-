// Function are block of code which are used to perform specific tasks.
// In C++ a funtion need to be declared before its used.
// Funciot have a function definition , function body and a return type.
// Function with return type not as void need to return a value at the end.
// Function with return type void do not return any value.

using namespace std;

#include <iostream>


int add(int a, int b)
{

    return a + b;

}

int main()
{

    cout <<add(12, 23)<< "\n" ;

    return 0;

}