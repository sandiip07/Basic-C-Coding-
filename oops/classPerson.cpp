using namespace std;
#include <iostream>

class person
{
    string name;
    string country;
    int age;

public:
    void setName(const string &newName)
    {
        name = newName;
    }
    string getName() const
    {
        return name;
    }

    void setCountry(const string &newCountry)
    {
        country = newCountry;
    }
    string getCountry() const
    {
        return country;
    }

    void setAge(const int &newAge)
    {
        age = newAge;
    }
    int getAge() const
    {
        return age;
    }
};

int main()
{

    person Person;
    Person.setName("sandeep");
    Person.setCountry("india");
    Person.setAge(25);
    // ob.getValue();
   cout<<"name :"<<Person.getName()<<endl;
    cout<<"city :"<<Person.getCountry()<<endl;
    cout<<"age :"<<Person.getAge()<<endl;

    return 0;
}