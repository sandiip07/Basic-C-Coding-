using namespace std;
#include <iostream>
int main()
{
    int num[10] = {1, 2, 3, 4, 1, 2, 3, 4, 1, 8};
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (num[i] == num[j])
            {
                num[i] = num[j] = '\0';
            }
        }
        if (num[i] != '\0')
        {
            cout << num[i] << " ";
        }
    }
    return 0;
}