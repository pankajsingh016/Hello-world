#include<iostream>
using namespace std;
class A
{
    public:
        int m1,m2;
    void get()
    {
        cin>>m1>>m2;
    }
    void show()
    {
        cout<<"Hello-world";
        //cout<<m1<<m2;
    }
};
int main()
{
    int A::*ptr = &A::m1;  //pointer to a variable in the class
    void(A::*ftr)();
    ftr = &A::show; //function pointer to a show() function of the class
     A t;
     (t.*ftr)();  
    return 0;
}