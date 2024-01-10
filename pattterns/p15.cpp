#include <iostream>
using namespace std;

int main(){

    int n , row = 1  ;
    cout<< "enter any number : ";
    cin>>n;
    int value = 1;

    while (row <= n ){
        int space = n - row;
        while (space){
            cout<< " " ;
            space = space - 1;
        }

        int col = 1 ;
        
        while(col <= row){
            cout << value;
            col = col + 1;
            
        }
        cout<<endl;
        row = row + 1;
        value = value +1 ;
    }

    return 0;
}

