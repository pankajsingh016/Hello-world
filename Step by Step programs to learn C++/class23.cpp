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
        Human(char *n, int a)
    {
        cout << "Human constructor\n";
        age = a;
        strcpy(name, n);
    }

        ~Human()
    {
        cout << "\nHuman destructor";
    }
};

class Person : public Human

{
    protected:
        int height;

    public:
        Person(int a, char *n, int h) : Human(n, a)
    {
        cout << "\nPerson constructor";
        height = h;
    }
};

class Student : public Person
{

        int rollno;
    public:
        Student(int r, int a, char *n, int h) : Person(a, n, h)
    {
        cout << "Student constructor\n";
        rollno = r;
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

    int r, a, h;
    char n[20];
    cin >> r >> a >> n;
    Student s1(r, a, n, h);
    s1.show();
    return 0;
}