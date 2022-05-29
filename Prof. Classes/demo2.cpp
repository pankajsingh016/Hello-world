#include<iostream>
using namespace std;
class A 
{
    private:
        int i;
    public:
        A(int a)
        {
            i = a;            
        }
        void printNum()
        {
           cout<<"i ->"<<i<<endl;
        }
        
};

class B:public A
{
    private:
        int j;
    public:
        B(int a,int b):A(a)
        {
            j=b;
        }
        void printNum()
        {
            cout<<"j ->"<<j<<endl;
        }
};

int main()
{
	A *a;
    
	B d(10,29);
    d.printNum();


    a = &d;
	a->printNum();
    
    return 0;
}