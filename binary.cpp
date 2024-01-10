using namespace std;
#include <iostream>
int binarySearch(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = (s + e) / 2; // s + (e-s)/2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s+e)/2;   // s + (e-s)/2;
    }
    return -1;
}
int main()
{   int key = 0, size = 6;
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int index = binarySearch(arr, size, key);
    cout<<"index of array is :"<<index<<endl;
    return 0; }