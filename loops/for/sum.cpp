using namespace std;
#include <iostream>

int main()
{
    cout << "enter two numbers : " ;
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1 ; i <= n ; i++)
    {
        sum = sum + i;
    
    }
        cout << " sum is : " << sum<< endl;

    return 0;
}
