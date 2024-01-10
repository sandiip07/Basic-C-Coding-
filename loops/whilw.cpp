using namespace std;
#include <iostream>


int sum(int value){
int summ = 0, i = 0;

    while(i <= value)
    {
        if(i % 2 == 0){
          summ = summ + i;
          i = i+1; 
        }
         i = i+1; 
       
    } 
    cout<< "sum is :" <<summ<< endl;
}

int main()
{

    cout << "enter value for addition : ";
    int value;
    cin>>value;
    sum(value);
    return 0;
}