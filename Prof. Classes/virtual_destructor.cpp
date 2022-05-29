//CPP program with out virtual destructor
//causing undefined behaviour
#include<iostream>
using namespace std;
class base{
    public:
        base()
        {
            cout<<"Construcitng base\n";
        }
       ~base(){
            cout<<"Destructing base\n";
        }
};

class derived:public base{
    public:
        derived()
        {
            cout<<"Constructing Derived\n";
        }
        ~derived()
        {
            cout<<"Destructing Derived\n";
        }
};

int main()
{
    derived *d = new derived();
    base *b = d;
    //delete b;
    return 0;
}