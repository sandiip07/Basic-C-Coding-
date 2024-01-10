using namespace std;
#include<iostream>

class human{
 public:
 void name(){
    cout<<"kuch bhi yar"<<endl;
 }

 void name(string n){
    cout<<"hn yad aa gya"<<endl;
 }
};

int main(){

    human ob;
    ob.name();
    ob.name("sandy");

    return 0;
}