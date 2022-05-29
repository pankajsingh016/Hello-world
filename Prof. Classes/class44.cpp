#include<iostream>
using namespace std;
class Student
{
    public:
        int rollno;
};

class marks : public Student
{
    private:
        int m1,m2;
    public:
        void get()
        {
            cin>>rollno>>m1>>m2;
        }
        void show()
        {
            cout<<rollno<<" "<<m1<<" "<<m2;
        }

};

int main()
{
    Student s,*sptr;
    marks m, *mptr;
    
    // mptr = &s; this is not valid as it don't need access of base class
    mptr = (marks*)&s; //type casting also known as downcasting

    //upcasting sptr = &m;
    sptr = &m;  //just pointing those member which are in base class like rollno
    //sptr->get();
    m.get();
    cout<<sptr->rollno;
}