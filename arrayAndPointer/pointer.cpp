using namespace std;
#include<iostream>

int main(){

string name ="sandeep";
string *ptr = &name;

cout<< &name << " value of variable\t\n";
cout<<ptr<< " pointer value\t\n";
cout<<name<< " variable value\t\n";


    return 0;
}