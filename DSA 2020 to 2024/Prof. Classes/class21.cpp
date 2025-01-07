/*
1. constructor and destructor sequence
2. accessing the class using mode
*/
#include<iostream>
using namespace std;
class Human
{
    protected:
        int age;
        char name[20];

    public:
        Human()
        {
            cout<<"Human constructor\n";
        }
};

class Student :private Human
{
    int rollno;
    public:
        Student()
        {
            cout<<"Student constructor"<<endl;
            cin>>age>>name>>rollno;
        }
        void show()
        {
            cout<<name<<"\t"<<age<<"\t"<<rollno;
        }
};

int main()
{
    Student s1;
    s1.show();
    return 0;   
}