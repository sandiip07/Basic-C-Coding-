using namespace std;

#include <iostream>


int add(int a, int b)
{

    return a + b;

}
double add(double a, double b)
{

    return a + b;

}

int main()
{
 cout<<"Addition of integer\t";
    cout <<add(12, 23)<< "\n" ;

 cout<<"Addition of double \t";
    cout <<add(12.80, 23.10)<< "\n" ;

    return 0;

}