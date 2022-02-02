//Operator overloading polymorphism
#include<iostream>
using namespace std;
class Complex
{
    int real,img;
    public:
    void get()
    {
        cin>>real>>img;
    }
    void display()
    {
        cout<<real<<" + i"<<img<<endl;
    }
    void add(Complex c)
    {
        real = real + c.real;
        img = img + c.img;
    }

    void operator + (Complex c)
    {
        real = real + c.real;
        img = img + c.img;
    }

    void operator -(Complex c)
    {
        real = real - c.real;
        img = img - c.img;
    }
};

int main()
{
    Complex a,b;
    a.get();
    a.display();
    b.get();
    b.display();
   // a.add(b);           //a+b
    a + b;
    a.display();  
    return 0;
}