using namespace std;
#include<iostream>

int main(){

    int arr[10] = {1,2,3,4,5,5,4,3,2,0};

    int len=1;
    for(int i = 0 ; arr[i] != '\0' ; i++){
        ++len;
    }
cout<<len;


    return 0;
}