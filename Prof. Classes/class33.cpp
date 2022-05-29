//Method overriding
#include<iostream>
using namespace std;
class A
{
    public:
    void show()
    {
        cout<<"Base-Class"<<endl;
    }
};
class B:public A
{
    public:
    void show()
    {
        cout<<"Derived Class"<<endl;
    }
};
int main()
{
    B b1;
    b1.show(); //improved version will be come 
    A a1,*aptr;
    aptr=&a1;
    a1.show();   // Static binding compiler binds the member function 
    aptr->show();           // To the objects of that class
     return 0;
}