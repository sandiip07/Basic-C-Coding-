using namespace std;
#include <iostream>

int main()
{

    for (int i = 0; i <= 5; i++)
    {
        for(int k = i ; k < 5 ; k++){
             cout << " ";
        }

        for (int j = 0; j < i * 2 + 1; j++)
        {
            cout << "*";
        }         
        cout << endl;
    }

    return 0;
}