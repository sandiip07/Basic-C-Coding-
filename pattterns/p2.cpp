using namespace std;
#include <iostream>

int main()
{

    int n;
    cout << "enter row number :";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << (n - col + 1);
            col = col + 1;
        }
        cout << "\n";
        row = row + 1;
    }
    return 0;
}
