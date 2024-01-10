#include <iostream>
using namespace std;

int main(){

    int n , row = 1  ;
    cout<< "enter any number : ";
    cin>>n;
    //  char value = 'A';


    while( row <= n )
    {
        int col = 1;
       
    
      while( col <= row )
      {
       char ch = ('A' + row + col - 2);
    //    cout<< value ;
          cout<< ch ;
    //    value = value +1;
        col = col + 1;

      }
        row = row + 1;
        cout<<endl;
    }
    return 0 ;

}