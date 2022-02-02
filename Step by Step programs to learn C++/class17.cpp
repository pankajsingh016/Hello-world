#include<iostream>
using namespace std;
class Human
{
    protected:

        int height;
        int age;
        string name;
    public:
        void gethuman()
        {
            cin>>height;
            cin>>age;
        }
        void showhuman()
        {
            cout<<height;
            cout<<age;
        }
};

//Student derived classs(subclass)
//Human (base class)
//class subclassname : access mode Base class
class Student : public Human
{

    int rollno;
    public:
    void get()
    {
        cin>>height;
        cin>>age;
        cin>>name;
        cin>>rollno;
    }
    void show()
    {
         cout<<name<<" "<<age<<" "<<height<<" "<<rollno;
    }
};


int main()
{
    Student s1;
    s1.get();
    s1.show();
    return 0;
}