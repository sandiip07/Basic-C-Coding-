using namespace std;
#include <iostream>

void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] <<" ";
    }
    cout<<"\n";
}

void reverseArray(int array[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(array[start], array[end]);
        start++;
        end--;
    }
}

int main()
{

    int array[] = {1, 2, 3, 4, 5};
    int arr[] = {1, 2, 3, 4};

    reverseArray(array, 5);
    reverseArray(arr, 4);

    printArray(array, 5);
    printArray(arr, 4);

    return 0;
}