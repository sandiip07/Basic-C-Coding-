using namespace std;
#include <iostream>
// Run polymorphysm  // dynamic // method polymorphism

class animal
{
public:
   void speak()
    {
        cout << "speaking :" << endl;
    }
};

class dog : public animal
{
    public:
    void speak()
    {
        cout << "Barking :" << endl;
    }
};

int main()
{
    dog object;
    object.speak();

    // animal *ptr ; 
    // ptr->speak();

    


    return 0;
}