using namespace std;
#include <iostream>

int main()
{
    int i, j;

    for (i = 0; i <= 10 ; i++)
    {
        cout << "\t\n";
        for (j = 0; j < i+10; j++)
        {
         cout<<"*";
        }
        cout<<"*";
    }

    return 0;
}