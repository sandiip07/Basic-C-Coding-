#include <iostream>
// #include"externalClass.cpp"
using namespace std;

class hero
{
    public:


    hero(int a){
        cout<<a<<endl;
        cout<<"constructor called :";
    }

// private:
//     int health;
// public:
    // char level;
    // int gethealth()
    // {
    //     return health;
    // }
    // char getlavel()
    // {
    //     return level;
    // }
    // void setHealth(int h)
    // {
    //     health = h;
    // }
    // void setlevel(char l)
    // {
    //     level = l;
    // }
};

int main()
{
 hero sandy(123);


    // static allocation
    //  hero gyan;
    // cout << "get value of hero is  : " << gyan.gethealth() << endl;
    // cout << "get value of hero is  : " << gyan.getlavel()<< endl;
    // Dynamically allocation
    // gyan.setHealth(70);
    // gyan.setlevel('A');
    // cout << "get value of hero is  : " << gyan.gethealth() <<endl;
    // cout << "get value of hero is  : " << gyan.getlavel()<<endl;
    // cout<<sizeof(gyan);
    // hero *b = new hero;
    // b->setHealth(100);
    // b->setlevel('S');
    // cout << (*b).gethealth() << endl;
    // cout << (*b).getlavel() << endl;
    // cout << "level :" << gyan.level << endl;
    // // cout<<"size :"<< gyan.health<<endl;
    // cout << "size :" << sizeof(gyan) << endl;

}