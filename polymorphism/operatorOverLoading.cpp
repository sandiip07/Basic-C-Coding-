using namespace std;
#include <iostream>

class Complex
{
public:
    int imag, real;
public:
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    Complex operator + (Complex const &obj)
    {
        Complex res;
        res.imag - imag + obj.imag;
        res.real - real + obj.real;
        return res;
    }
    void print(){
        cout << real << " + i " << imag<< endl; 
    }
};

int main()
{
Complex c1(12,7) , c2(12,3);
Complex c3  = c1 + c2;
c3.print();
    return 0;
}