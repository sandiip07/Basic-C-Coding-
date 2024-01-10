using namespace std;
#include <iostream>

int remove(int arr1[], int arr2[], int size)
{
    int k=0;
    int arr3[k];
    for (int i = 0; i <= size; i++)
    {
        for (int j = 0; j <= size; j++)
        {

            if (arr1[i] == arr2[j])
            {
                arr3[k] = arr2[i];
                cout<<arr3[k];
                continue;
            }
            
         
        }
    }
    return 0;
}

int main()
{

int arr1[3]={1,2,3};
int arr2[3]={1,2,4};

cout<<remove(arr1 , arr2 , 3);

    return 0;
}