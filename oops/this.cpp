using namespace std;
#include <iostream>

class Hero
{
public:
    int health;
    char level;

Hero(){
    cout<<"i am default for bansal"<<endl;
}

    Hero(int health, char level)
    {
        // cout << this->health << endl;
        this->health = health;
        this->level = level;
    }

    // copy construtor
    // Hero(Hero& temp){
    //     cout<<"i am copy by you"<<endl;
    //     this->health = temp.health;
    //     this->level = temp.level;
    // }

    void print()
    {
        cout << health << endl;
        cout << level << endl;
    }
    ~Hero(){
        cout<<"i am destructor"<<endl;
    }
};

int main()
{
    int HEALTH = 90;
    char LEVEL = 'A';

    
    Hero bansal;

    Hero *p = new Hero;
    //manually called distructir
    delete p;
   
   

    // Hero san(HEALTH, LEVEL);
    // san.print();

    //Dynamic allocation

    // Hero *p = new Hero;
    // p->health = 100;
    // cout<<p->health<<endl;

    //copy consructor default
    // Hero deep(san);
    // deep.print();


    return 0;
}