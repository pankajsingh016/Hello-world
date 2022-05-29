//multiple inheritance with paramaterized constructor
#include <iostream>
#include <cstring>
using namespace std;
class Human
{
    protected:
        int age;
        char name[20];
    public:
        Human()
    {
        cout << "Human constructor\n";
    }
    void show()
    {
        cout<<"Human"<<endl;
    }
};

class Person

{
    protected:
        int height;

    public:
        Person()
        {
        cout << "\nPerson constructor";
        }

        void show()
        {
            cout<<"xyz";
        }

};

class Student : public Person,public Human
{

        int rollno;
    public:
        Student()
    {
        cout << "Student constructor\n";
       
    }

    void show()
    {
        cout << age << " " << name << " " << rollno;
    }

    ~Student()
    {
        cout << "\nStudent destructor";
    }
};

int main()
{

    Student s1;
    s1.Human::show(); //when two same functions are present in the base classes.
    return 0;
}