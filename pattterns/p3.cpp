#include<iostream>
using namespace std ;
int main() {

int row = 1  , n;
int count = 1;
cout<<"enter any number :";
cin>>n;

while (row <= n)
{
    int col = 1;
    while(col <= n){

        cout<<count<<" ";
        count = count + 1;
        col = col + 1;

    }
    cout<<endl;
    row = row +1; 
}
  return 0;
}