using namespace std;
#include <iostream>

class findPrime
{
public:
    void prime(int n)
    {
        int pointer = 0;
        for (int num = 2; num < n; num++)
        {
            // int pointer = 0;
            if (n % 2 == 0)
            {
                pointer++;
                // printf("number is not a prime number !");
                break;
            }
            else
            {
                pointer = 0;
                // printf("given number is a prime number !");
                break;
            }
        }

        if (pointer == 1)
        {
            printf("number is not a prime number !");
        }
        else
        {
            printf("given number is a prime number !");
        }
    }
};

int main()
{

    findPrime hit;
    int n;
    cout << "enter any number to check it is prime or not !";
    cin >> n;
    hit.prime(n);
    return 0;
}