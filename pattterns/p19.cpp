#include <iostream>
using namespace std;
int main()
{
    int n, row = 1;
    cout << "enter any number : ";
    cin >> n;

    while (row <= n)
    {

        int spaces = n - row;
        while (spaces)
        {
            cout << " ";
            spaces = spaces - 1;
        }

        int col = 1;
        while (col <= row)
        {
            cout << col;
            col = col + 1;
        }
        int start = row - 1;
        while (start)
        {
            cout << start;
            start = start - 1;
        }

        cout << endl;
        row = row + 1;
    }

    return 0;
}