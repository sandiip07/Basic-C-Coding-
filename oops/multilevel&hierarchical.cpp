using namespace std;
#include <iostream>

class parent
{
public:
    string name = "sandeep";
    string color = " hn bhai gora";
    int age = 20;

    void parentFun()
    {
        cout << "i am parent function" << endl;
    }
};

class child1 : public parent
{

public:
    void child1Fun()
    {
        cout << "i am child 1" << endl;
    }
};


class child2 : public parent{
public:
    void child2Fun()
    {
        cout << "i am child 2" << endl;
    }
};



int main()
{

    child1 ob1;
    cout << ob1.name<< endl;
    cout << ob1.age<< endl;
    cout << ob1.color<< endl;
    ob1.parentFun();
    ob1.child1Fun();

    child2 ob2;
    cout << ob2.name<< endl;
    cout << ob2.age<< endl;
    cout << ob2.color<< endl;
    ob2.parentFun();
    ob2.child2Fun();

    return 0;
}