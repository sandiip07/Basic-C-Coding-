#include<iostream>
using namespace std;
int main(){
    int n , row = 0 ;
    cout<<"enter any number :";
    cin>>n;
    while(row <= n ){
        int col = 0 , spaces = 0 ;
        while( spaces < row )
        {
            cout<<"-";
            spaces = spaces + 1 ;
        }
        col = row;
        while(col < n)
        { 
            cout<<col+1;   
            col = col + 1;         
        }
        cout<< endl;
        row = row + 1;

    }
    return 0 ;
}