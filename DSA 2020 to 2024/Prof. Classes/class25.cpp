#include<iostream>
#include<cstring>
using namespace std;
class Human
{
    protected:
        int age;
        char name[20];
};
class Person:public Human
{
        protected:
            int height;
        public:
            void get()
            {
                cout<<"Height-:"; cin>>height;
                cout<<"Age -:"; cin>>age;
                cout<<"Name -:"; cin.getline(name,20);
            }
};
class Student:public Human
{
            int rollno;
        public:
            void get();
            void show();
};
int main()
{
    
    return 0;
}