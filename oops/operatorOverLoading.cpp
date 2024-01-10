#include <iostream>
using namespace std;
//static polymorphysm

class overload
{
public:
  int a = 10;
  
  void operator+(overload &obj)
  {
    // int value1 =obj.a ;
    // int value2 = this->a;
    // cout << "output :" << value1 - value2<<endl;
    cout<<"main sandeep hu :"<<endl;
  }

  void operator() (){
    cout<<"mein bracket hu :"<<this->a<<endl;
  }
};

int main()
{
  overload ob;
  overload ob1;
  // ob.a = 10;
  ob1.a = 20;
  ob + ob1;

  ob1();
  return 0;
}