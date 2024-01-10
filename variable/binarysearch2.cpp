using namespace std;
#include<iostream>
int fc(int arr[] , int size , int key){
    int s = 0;
    int e = size - 1;
    int mid = (s+e) /2;
  int fi = -1;
    while(s<=e){
        if(arr[mid] == key){
            fi = mid;
            e = mid-1;
        }
        else if(key > arr[mid]){
            s = mid +1;
        }
        else if(key < arr[mid]){
            e = mid - 1;
        }
        mid = (s+e) /2;
    }
    return fi;
}
int lc(int arr[] , int size , int key){
    int s = 0;
    int e = size - 1;
    int mid = (s+e) /2;
    int li = -1;
    while(s<=e){
        if(arr[mid] == key){
           li = mid;
            s = mid+1;
        }
        else if(key > arr[mid]){
            s = mid +1;
        }
        else if(key < arr[mid]){
            e = mid - 1;
        }
        mid = (s+e) /2;
    }
    return li;
}
int main(){
    int arr[10] = {1,2,3,3,3,3,3,3,3,5};
    cout<<"total accurence is : "<< lc(arr , 10 , 3) - fc(arr , 10 , 3) <<endl;
    cout<<"lasr accurence is : "<<lc(arr , 10 , 3)<<endl;
    // cout<<li-fi;
    return 0;
}