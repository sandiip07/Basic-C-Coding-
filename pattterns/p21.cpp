#include <iostream>
using namespace std;
int main()
{
    int n, row =0;
    cout << "enter any number : ";
    cin >> n;
    int col = n; 
    while(row < n){
        while(col > row){
                cout<< " " <<col<<" ";
                col = col - 1;
        }
        cout<<endl;
         row = row + 1;
         col = col - 1;
        }
    
    return 0;
}