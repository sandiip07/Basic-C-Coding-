using namespace std;
#include <iostream>

int main()
{
    int row = 1;
    int n;
    cout<<"enter row number :";
    cin >> n;
  
    while(row <= n){
        int col = 1;
        while (col <= n)
        {
            cout << col<<"\t";
            col++;
        }
        cout << "\n\n";
        row++;
    }
    return 0;
}