using namespace std;
#include<iostream>

int main(){

    int arr[10] = {1,2,3,4,5,5,4,3,2,0};

    for(int i = 0 ; i < 10; i++){
        int num = arr[i];
        int count = 0;

        for(int j = 0 ;j<10; j++){
            if(arr[j]==num){
                count++;
            }
        }
        cout<<arr[i]<<"is occure"<<count<<endl;

    }



    return 0;
}