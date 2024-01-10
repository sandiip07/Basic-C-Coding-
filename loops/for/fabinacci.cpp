using namespace std;
#include <iostream>

int main()
{
    cout << "enter two numbers : " ;
    int n;
    cin >> n;
    int a = 0 , b = 1;
    cout<<a<<b<<" ";

    for (int i = 0; i <= n; i++)
    {
        int nextNumber = a+b;
        cout<< nextNumber<<" ";
        b = a ;
        a = nextNumber;
    }
        

     return 0;
}