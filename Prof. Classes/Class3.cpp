//declaring class after 2 years and 
//using scope resolution operators ::
// to access the member function outside


#include<iostream>
using namespace std;

class student
{
    private:
    string name;
    int rollno;
    float marks;

    public:

    void getdata();
    // {
    //     cin>>name;
    //     cin>>rollno;
    //     cin>>marks;
    // }

    void dispdata();
    // {
     
    // cout<<"Name of Student -:"<<name<<endl;
    // cout<<"Roll Number -:"<<rollno<<endl;
    // cout<<"Marks -:"<<marks<<endl;
    // }
};

void student::getdata() //defining member function outside the class
{
    cin>>name;
    cin>>rollno;
    cin>>marks;
}

 void student::dispdata()
    {
     
    cout<<"Name of Student -:"<<name<<endl;
    cout<<"Roll Number -:"<<rollno<<endl;
    cout<<"Marks -:"<<marks<<endl;
    }

int main()
{
    student s1;
    // s1.name ="Pankaj";
    // s1.rollno=20;
    // s1.marks = 90;
    // cout<<"Name of Student -:"<<s1.name<<endl;
    // cout<<"Roll Number -:"<<s1.rollno<<endl;
    // cout<<"Marks -:"<<s1.marks<<endl;

    // s2.name ="Karan";
    // s2.rollno=200;
    // s2.marks = 89;
    // cout<<"Name of Student -:"<<s2.name<<endl;
    // cout<<"Roll Number -:"<<s2.rollno<<endl;
    // cout<<"Marks -:"<<s2.marks<<endl;
    s1.getdata();
    s1.dispdata();



    
    return 0;
}