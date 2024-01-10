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
        char start = 'A' + row - col  ;
       
    
      while( col <= row )
      {
       
    //    cout<< value ;
          cout<< start ;
          start = start +1;
          col = col + 1;

      }
        row = row + 1;
        cout<<endl;
    }
    return 0 ;

}