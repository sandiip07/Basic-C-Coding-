#include <iostream>
using namespace std;
int main()
{

    int row = 1 ,n , count = 1;
    cout << "enter any number :";
    cin >> n;

    while (row <= n)
    {
     int col = 1;

        while (col <= row)
        {
            cout<<count << " ";
            col = col+1;
            count = count +1 ;
        }
        cout<<"\n";
        row = row+1;
    }
    return 0;
}