#include<iostream>
using namespace std;
class Complex
{
      int real,img;
    public:
    Complex()
    {
        real=0;img=0;
    }
    friend istream &operator >>(istream&,Complex&);
};

istream & operator >> (istream &cin, Complex &c1 )
{

  cin>>c1.real>>c1.img;

  return cin;
}

int main()
{ 
    Complex c1;
    cin>>c1;

}