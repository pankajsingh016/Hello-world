//Friend functions accessing for two different classes.
#include<iostream>
using namespace std;
class B;
class ABC
{
   int num;
   public:
   void getdata();
   friend void display(ABC obj , B o);
};

void ABC :: getdata()
{
    cout<<"Enter Number -:";
    cin>>num;
    cout<<endl;
}

class B
{
    int num;
    public:
    void getdata();
    friend void display(ABC obj , B o);
};

void B :: getdata()
{
    cout<<"Enter Number for class 2-:";
    cin>>num;
}

void display(ABC obj , B o)
{
    cout<<obj.num<<o.num<<endl;
}


int main()
{
    ABC obj;
    obj.getdata();
    B ob;
    ob.getdata();
    display(obj,ob);   
    return 0;
}