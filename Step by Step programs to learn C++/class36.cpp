#include<iostream>
using namespace std;

// Class with pure virtual function  is called abstract class.
// Abstract class cannot have the object.
// So it is the resposibility of derived class to give the defination

class A
{
    public:
    int x=10;
    virtual void print() =0; // As we know that derive class have 
                            // the more defination of print() so we make it 
                            // as the pure virtual function.
};

class B : public A
{
    public:
    int y=4;
    void print()
    {
        cout<<"Derived-Class\n";
    }
};

class C :public B
{
    public:
    void print(){ cout<<"c";}
};


int main()
{
    B b1, *bptr;
    bptr = &b1;
    bptr->print();
    C a1;
}