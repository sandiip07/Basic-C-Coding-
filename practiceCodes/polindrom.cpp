using namespace std;
#include <iostream>
int main()
{
    int num;
    cout << "enter a number " << endl;

    cin >> num;
    int rem = 0;
    int ans = 0;
    int temp = num;

    while (temp != 0)
    {
        rem = temp % 10;
        temp = temp / 10;
        ans = ans * 10 + rem;
        cout << ans << endl;
    }
    if (num == ans)
    {
        cout << ans << "number is polindrom " << endl;
    }
    else
    {
        cout << ans << "number is not a polindrom " << endl;
    }
    return 0;
}