//Dynamically making an object of the class
#include<iostream>
using namespace std;

class test
{
    int a;
    public:
    test()
    {
        a=10;
    }
    void show()
    {
        cout<<a;
    }
};

int main()
{
    test *ptr = new test;
    if(ptr==NULL)
    {
        exit(0);
    }

    ptr->show();

}