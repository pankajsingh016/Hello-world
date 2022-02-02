#include<cstring>
#include<iostream>
using namespace std;

class Student
{ 
     char name[20];
     int rollno;
  public:
    Student()
    {
      cout<<"default\n";
      strcpy(name,"xyz");
      rollno=12;
    }

  void show()
  {
      cout<<name<<" "<<rollno<<endl;
  }
};

int main()
{
  Student s2,s3; //doesnot provide default 
  s3=s2; //assignment operator
  Student s1=s2; //copy const
  s1.show(); s2.show();

}