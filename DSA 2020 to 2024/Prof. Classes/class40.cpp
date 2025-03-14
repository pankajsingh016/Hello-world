//overloading of UNARY operator (Pre-increment)
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
            ++x;
        }

        void show()
        {
            cout<<"x ="<<x<<endl;
        }
        friend void operator --(Number &a);
};

void operator --(Number &a)
{
    --a.x;
}
int main()
{
    Number n1(6);
    n1.show();
    ++(n1);
    n1.show();
    --(n1);
    n1.show();

    return 0;
}