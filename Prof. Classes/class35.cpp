#include<iostream>
using namespace std;

class A
{
    public:
    int x=10;
    virtual void print()
    {
        cout<<"Base-Class\n";
    }
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

int main()
{
    B b1, *bptr;
    A a1, *aptr;
    aptr = &b1;
    aptr->print();

}