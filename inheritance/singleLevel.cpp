using namespace std;
#include <iostream>

class super
{
public:

 string collegeName = "bansal college of engineering";
 string location = "mandideep";

    void c_name()
    {
        cout << "\nname of college is :" << collegeName;
        cout << "\nlocated at "<<location <<"\n";
    }
};

class child : public super
{

 public:
 string studentName = "sandeep ahirwar";
 string location = "shahganj";
    void s_name()
    {
        cout << "\nname of student is "<<studentName  ;
        cout << "\nstudent come from \n"<<location  ;
    }
};

int main()
{
    child obj;
    obj.c_name();
    // obj.s_name();

    return 0;
}