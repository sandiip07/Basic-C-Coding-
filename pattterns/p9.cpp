#include <iostream>
using namespace std;

int main(){

    int n, row = 1  ;
    cout<< "enter any number : ";
    cin>>n;
      int start = 'A' ;

    while( row <= n )
    {
        int col = 1;
      

      while( col <= n )
      {
        char ch = start;//char ch = ('A' + col - 1) ; // ('A' + col - 1) aaaa bbbb cccc dddd 
        cout << ch << " " ;
        start = start + 1;
        col = col + 1;
      }
        row = row + 1;
        cout<<endl;
    }
    return 0 ;

}

