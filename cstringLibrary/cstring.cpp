using namespace std;
#include<iostream>
#include<cstring>

int main(){
    char c1[]="sandeep ";
    char c2[]="ahirwar ";

    cout<<" concatenation : " << strcat(c1 , c2)<<"\n";
    cout<<" copy c1 to c2 : " << strcpy(c1 , c2)<<"\n";
    cout<< c1 ;
    cout<<" length of the string :" << strlen("sandeep ")<<"\n";
    return 0;

}