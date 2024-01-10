using namespace std;
#include <iostream>

class grandParent
{
public:
    string G_name;
    void get_G_name(string gn)
    {
        G_name = gn;
    }
    void put_G_name()
    {

        cout << " I am grandparent:";
        cout << " grandparent name is :" << G_name << "\n";
    }
};

class parent : public grandParent
{
public:
    string P_name;
    void get_P_name(string pn)
    {
        P_name = pn;
    }
    void put_P_name()
    {
        cout << " I am parent:";
        cout << " parent name is :" << P_name << "\n";
    }
};

class child : public parent
{
public:
    string C_name;
    void get_C_name(string gn)
    {
        C_name = gn;
        // return C_name;
    }
    void put_C_name()
    {
        cout << " I am child:";
        cout << " child  name is :" << C_name << "\n";
    }
};

int main()
{
    child obj;

    obj.get_G_name("Babar khan");

    obj.get_P_name("Humayu khan");

    obj.get_C_name("Akbar khan");

    obj.put_G_name();
    obj.put_P_name();
    obj.put_C_name();

    return 0;
}