using namespace std;
#include <iostream>

int main()
{

    int a[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        cout << "\nvalue of array is :" << a[i];
        
    }

    int b[10];

     cout<<"\nenter the value of array :";

    for (int j = 0; j < 5; j++)
    {
        cin >> b[j];
        cout << "\n";
    }

    cout<<"The value of array is :";

    for (int j = 0; j < 5; j++)
    {
        cout<< b[j];
        cout << "\t";
    }

    return 0;
}