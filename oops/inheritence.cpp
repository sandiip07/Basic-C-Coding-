using namespace std;
#include <iostream>

class humen
{
    int age;
    string name;
    int weight;

public:
    void setAge(int age)
    {
        this->age = age;
    }
    int getAge()
    {
        return this->age;
    }

    int setWeigth(int weigth)
    {
        this->weight = weigth;
    }
    int getWeigth()
    {
        return this->weight;
    }


    void hello()
    {
        cout << "hye says!" << endl;
    }
};

class men : public humen
{

public:
    string color = "Red";

    

    void child()
    {
        cout << "i am child" << endl;
    }
};

int main()
{
humen obj;
    obj.hello();
    obj.setAge(21);
    cout << obj.getAge() << endl;

men obj1;
    obj1.setAge(23);
    cout << obj1.getAge() << endl;
    cout << obj1.getWeigth() << endl;
    obj1.hello();
    cout << obj1.color<< endl;

    return 0;
}