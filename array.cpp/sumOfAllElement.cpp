using namespace std;
#include <iostream>

int sumOfElements(int array[] , int n){
    int sum = 0;
    for(int i = 0 ; i < n ; i++ )
    {
        sum = sum + array[i];
    }
    return sum;
}

int main()
{

    int array[100];
    int size;
    cout << "enter the values for the array :"<<endl;

    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }

    cout<<"sum of all array elements are : " <<sumOfElements(array , size)<<endl;
    return 0;
}