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
        Human(int a, char c)
        {
            cout<<"Human constructor\n";
        }
};

class Student :public Human
{
    int rollno;
    public:
        Student(int r,int a, char c) :Human(a,c)  //  passing argument to the base class human
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
    int r,a;
    char n;
    cin>>r>>a>>n;
    Student s1(r,a,n);
    s1.show();
    return 0;   
}