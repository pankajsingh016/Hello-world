//overloading of UNARY operator
#include<iostream>
using namespace std;
class Number
{
        int x;
    public:
        Number(int x)
        {
            this->x=x;
        }

        void operator ++()
        {
             x++;
        }

        void operator ++(int)  //Dummy Argument to distinguish between the ++n1 and n1 ++;
        {
            ++x;
        }

        void show()
        {
            cout<<"x ="<<x<<endl;
        }
};
int main()
{
    Number n1(6);
    n1.show();
    ++n1;
    n1.show();
    n1++; 
    n1.show();

    return 0;
}