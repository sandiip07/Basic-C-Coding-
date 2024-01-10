using namespace std;
#include <iostream>

void uniqueNumber(int arr[], int size)
{

    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << ans << "\n";
}

int main()
{

    int array[5] = {4, 6, 6, 4, 2};
    uniqueNumber(array, 5);
    return 0;
}