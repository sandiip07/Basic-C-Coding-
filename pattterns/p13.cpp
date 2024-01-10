#include <iostream>
using namespace std;
int main(){
    int n , row = 1  ;
    cout<< "enter any number : ";
    cin>>n;
    while( row <= n )
    {
        // space print 
        int space = n - row;
        while(space){
            cout << "_";
            space = space - 1 ;

        }
       // print *s
      int col = 1 ;    
      while( col <= row )
      {
          cout<< "*";
          col = col + 1;
      }
        row = row + 1;
        cout<<endl;
    }
    return 0 ;
}