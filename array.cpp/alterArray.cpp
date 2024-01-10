using namespace std;
#include <iostream>

void alterArray(int arr[], int size)
{

    for(int i = 0 ; i < size ; i+=2){
        if( i+1 < size ){
            swap(arr[i] , arr[i+1]);
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int evenArray[6] = {1, 2, 3, 4, 5, 6};
    int oddArray[5] = {1, 2, 3, 4, 5};

    alterArray(evenArray, 6);
    printArray(evenArray, 6);

    alterArray(oddArray, 5);
     printArray(oddArray, 5);

    return 0;
}