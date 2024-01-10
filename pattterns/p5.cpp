#include <iostream>
using namespace std;
int main()
{

    int row = 1 ,n;
    cout << "enter any number :";
    cin >> n;

    while (row <= n)
    {
     int col = 1;
     int value = row ;

        while (col <= row)
        {
            cout << value ;

            
            col = col+1;
            value = value + 1;
        }
        cout<<"\n";
        row = row+1;
    }
    return 0;
}