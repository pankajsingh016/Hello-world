//Hericical base class
#include<iostream>
using namespace std;
class Person
{
    protected:
    int age;
    char gender;
    public:
    Person(int a, char g)
    {
        cout<<"Person Called"<<endl;
          age = a;
          gender = g;
    }
    ~Person()
    {
        cout<<"Person Gone"<<endl;
    }
};
class Student :public Person
{
    int roll;
    public:
    Student(int a,char g,int r):Person(a,g)
    {
        cout<<"Student Called"<<endl;
        roll = r;
    }
    ~Student()
    {
        cout<<"Student Gone"<<endl;
    }
};

class Faculty : public Person
{
    int empid;
    public:
    Faculty(int a,char g,int e):Person(a,g)
    {
        cout<<"Faculty Called"<<endl;
        empid = e;
    }
    ~Faculty()
    {
        cout<<"Faculty Gone"<<endl;
    }

};

int main()
{
    Student s1(30,'A',23);
    Faculty f1(23,'B',21);
}