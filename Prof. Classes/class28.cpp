//Diamond inheritance
//Ambiguity in deciding about the inherited 
#include<iostream>
using namespace std;
class Student
{
    protected:
        int roll;
    
};
class marks:public virtual Student
{
    protected:
        int m1,m2;
    public:
};
class extra:public virtual Student
{
    protected:
        int activity;
};

class result :public marks,public extra
{
    void show()
    {
        cin>>roll>>m1>>m2>>activity;
        //roll is with both marks and extra so
        // marks::roll  will give a way to compiler
        // Using virtual make the only one copy to reach to the result
        // in the diamond 
        cout<<m1+m2+activity;
    }
};