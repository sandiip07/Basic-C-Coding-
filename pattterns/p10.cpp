#include <iostream>
using namespace std;

int main(){

    int n , row = 1  ;
    cout<< "enter any number : ";
    cin>>n;
    //   char start = 'A' ;

    while( row <= n )
    {
        int col = 1;
        // row = 65;
        // char value = row;
      while( col <= n )
      {
       
       char ch = 'A' + row + col - 2;
        cout<< ch << " ";
        // start = start + 1;
        col = col + 1;

      }
        row = row + 1;
        cout<<endl;
    }
    return 0 ;

}