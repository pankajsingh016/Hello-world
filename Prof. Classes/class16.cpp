#include<iostream>
using namespace std;

int i;
class A
{
    public:
    ~A()
    {
        cout<<"destructor"<<endl;
        i=10;
        cout<<i<<endl;
    }
};
int foo()
{
    i =3;
    A ob;

    return i;
}

int main()
{
    cout<<"In main"<<i<<endl;
    cout<<foo()<<endl;
    cout<<"In main"<<i<<endl;
    return 0;
}