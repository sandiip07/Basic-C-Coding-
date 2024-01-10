using namespace std;
#include<iostream>

class myClass{
    public:
    int a,b;

    // constructor
    myClass(){
        cout<<"constructor"<<endl;
    }



    void print(){
        cout<<"a :" << a <<"\nb :"<<b<<"\n";
    }

};

int main(){

  myClass *obj = new myClass();
  myClass *obj1 = obj;

  obj1 = new myClass();



    return 0;
}