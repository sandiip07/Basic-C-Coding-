using namespace std;
#include<iostream>

int main(){

for(int i =1 ;i<=5; i++){
    for(int j = i ;j < 5;j++){
        cout<<"*";
    }

    for(int k = i;k>0; k--){
        cout<<k;
    }
    cout<<endl;
}
    return 0;
}