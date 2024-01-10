using namespace std;
#include<iostream>

int main(){

    int a = 12;
    int b = 11;
    

    int c = (a | b) ;
    cout<<c<<endl;

    c = (a & b) ;
    cout<<c<<endl;

     c = (a && b) ;
    cout<<c<<endl;

    c = (a || b) ;
    cout<<c<<endl;


    return 0;
}