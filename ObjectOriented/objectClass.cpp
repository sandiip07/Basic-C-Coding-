using namespace std;
#include <iostream>

class Student
{
private:
    int id;
    string name;

public:
    void put_details(int i , string s)
    {
        id=i;
        name=s;
    }

    void get_details()
    {

        cout << "id : " << id;
        cout << "\nname :" << name << "\n";
    }
};

int main()
{

    Student object;

    int s_id;
    string s_name;

    cout<<"enter id of Student:\t";
    cin>>s_id;

    cout<<"enter name of Student:\t";
    cin>>s_name;

    object.put_details(s_id , s_name);

    object.get_details();

    return 0;
}