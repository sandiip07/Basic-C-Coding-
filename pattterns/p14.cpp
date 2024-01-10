#include <iostream>
using namespace std;

int main(){

    int n , row = 1  ;
    cout<< "enter any number : ";
    cin>>n;


    while( row <= n )
    {
       // print *
      int col = n ;    
      while( col >= row )
      {
          cout<< "*";
          col = col - 1;

      }
        row = row + 1;
        cout<<endl;
    }
    return 0 ;

}