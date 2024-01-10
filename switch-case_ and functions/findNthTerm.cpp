#include <iostream>
using namespace std;

void Nth_term(int x)
{
    int AP = ((3 * x) + 7);
    cout << " Nth term is : " << AP << endl;
}

int main()
{
    int n;
    cout << " enter a number to find Nth term of this AP : " << endl;
    cin >> n;

    Nth_term(n);
}