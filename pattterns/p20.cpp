#include <iostream>
using namespace std;
int main()
{
    int n, row = 0;
    cout << "enter any number : ";
    cin >> n;

    while(row <= n){

        int col = 1;
        while(col <= n- row){
            cout<<" "<<col<<" ";
            col=col+1; 
        }

       col = 1 ;    
      while( col <= row )
      {
          cout<< " * ";
          col = col + 1;
      }
         col = 1 ; 
        while(col <= row){
                cout<< " * ";
          col = col + 1;
        }
        
        col = n -row; 
        while(col > 0){
                cout<< " " <<col<<" ";
                col = col - 1;
         }
         cout<<endl;
         row = row + 1;
        
    }
    return 0;
}