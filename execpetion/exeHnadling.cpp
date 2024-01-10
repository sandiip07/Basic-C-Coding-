
#include<iostream>
#include<stdexcept>
using namespace std;

int main(){
  

    try{
    int a = 10;
    int b = 0;
    if(b == 0){
throw invalid_argument("can'nt devide by 0");
    }
    int c = a/b;
    cout<<"hye";
    }
    catch(exception& e){
        cout<<e.what();
    }

    // double bal = 1000.0;
    // try
    // {
    //     //deposite
    //     double amt;
    //     cout<<"enter deposite amount ; "<< endl;
    //     cin>>amt;
    //     if(amt <= 0){
    //        throw invalid_argument("invalid deposite ");
    //     }
    //     bal = bal + amt ;
    //     cout<<"Available Amount : "<<bal<< endl;
    //     //withdraw
    //     cout<<"enter withdraw amount ; "<< endl;
    //     cin>>amt;
    //     if(amt > bal){
    //        throw runtime_error("insufficient fund");
    //     }

    //     bal = bal - amt ;
    //     cout<<"Available Amount : "<<bal<< endl;  
    // }
    // catch(exception& e)
    // {
    //     cout<<e.what() << endl;
    // }
    return 0;
}