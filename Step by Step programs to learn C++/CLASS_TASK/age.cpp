#include<iostream>
#include<cstring>
using namespace std;

class info 
{
        string name;
        int age;
    public:
        void getage()
        {
            cout<<"Enter Name-:"; getline(cin,name);
            cout<<"Enter Age-:";
            cin>>age;
        }
        void showage()
        {
            cout<<"Name-:"<<name<<endl;
            cout<<"Age-:"<<age<<endl;
            
        }
};
int main()
{
    info *ptr;
    info o;
    ptr = &o;
    ptr->getage();
    ptr->showage();
    return 0;
}