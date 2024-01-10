using namespace std;
#include <iostream>

class parent
{
public:
    virtual void name()
    {
        cout << "i am from parent \n";
    }
};

class child : public parent
{
public:
    void name()
    {
        cout << "i am from child \n";
    }
};

int main()
{
    parent *ptr;
    child ob;
    ptr = &ob;
    ptr -> name();

    return 0;
}