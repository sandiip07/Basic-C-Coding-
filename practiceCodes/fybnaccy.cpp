using namespace std;
#include <iostream>
int main()
{
    int num;
    cout << "enter a number " << endl;
    int s = -1, n = 1, e;
    cin>>num;
    // cout << s << " " << n << " ";
    for (int i = 1; i <= num; i++)
    {
        e = s + n;
        s = n;
        n = e;
        cout <<  e << " " ;
    }

    return 0;
}