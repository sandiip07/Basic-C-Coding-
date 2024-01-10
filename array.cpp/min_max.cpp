using namespace std;
#include <iostream>

int maxValue(int arr[], int n)
{
    int max = INT32_MIN;

    for (int i = 0; i <= n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int minValue(int arr[], int n)
{
    int min = INT32_MAX;

    for (int i = 0; i <= n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

void arrValue(int arr[], int n)
{
    cout << "array elements are :";
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] <<" ";
    }
    cout<<endl;
}

int main()
{

    int size;
    int arr[100];
    cout << "enter the size of an array : " << endl;
    cin >> size;

    for (int i = 0; i <= size; i++)
    {
        // input the array element here ;
        cin >> arr[i];
    }

        arrValue(arr, size);
    cout << "maximum value of array is : " << maxValue(arr, size) << endl;
    cout << "minimum value of array is : " << minValue(arr, size) << endl;

    return 0;
}