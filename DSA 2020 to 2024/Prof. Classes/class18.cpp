#include<iostream>
using namespace std;
class Human
{
    private:
        int age;
    protected:
        int height;
    public:
        string name;
};

//Student derived classs(subclass)
//Human (base class)
//class subclassname : access mode Base class
// accesss mode will defined the state of the inherited data members
// in derived class
class Student : protected Human
{

    int rollno;
    public:
    void get()
    {
        cin>>height;
       // cin>>age;
        cin>>name;
        cin>>rollno;
    }
    void show()
    {
         cout<<name<<" "<<height<<" "<<rollno;
    }
};


int main()
{
    Student s1;
    s1.get();
    s1.show();
   // s1.name;
    return 0;
}