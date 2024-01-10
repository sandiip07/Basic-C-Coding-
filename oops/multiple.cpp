using namespace std;
#include<iostream>

class parent1 {
    public:
    string name1 = " parent 1";

    void Pname1(){
        cout<<"i am parent1"<<endl;
    }

};

class parent2 {
     public:
    string name2 = " parent 2";

     void Pname2(){
        cout<<"i am parent2"<<endl;
    }

};

class child : public parent1 , public parent2 {
     public:
     string name3 = "baby";
       void Cname3(){
        cout<<"i am baby of both of these"<<endl;
    }



};

int main(){

    child ob;

    ob.name1;
    ob.name2;
    ob.name3;

    ob.Pname1();
    ob.Pname2();
    ob.Cname3();



    return 0;
}