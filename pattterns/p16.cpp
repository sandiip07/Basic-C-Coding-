#include <iostream>
using namespace std;

int main()
{

    int n, row = 0;
    cout<< "enter any number : ";
    cin>>n;

    while (row <= n)
    {

        int col = 0 , space = 0;

        while (space < row)
        {
            cout <<" _ ";
            space = space + 1;
        }
        while (col < n-row)
        {
            cout <<" * ";
            col = col + 1;
        }

        // space here print

        cout << endl;
        row = row + 1;
    }

    return 0;
}