#include<iostream>
#include<cstring>
using namespace std;

class student
{
    private:
    int roll;
    string name;
    float percentage;
    
    public:

   
    void getdata(student s1)
    {
         cout<<"Enter the Roll Number-:"<<endl;
         cin>>s1.roll;
         fflush(stdin);
         cout<<"Enter the name -:"<<endl;
         cin>>s1.name;  //getline(cin,name) , This is only for character array[] ->fgets(name,5,stdin)
         cout<<"Enter the Percentage -:"<<endl;
         cin>>s1.percentage;
    }
    
    void dispdata()
    {
        cout<<"Roll Number -:"<<roll<<endl;
        cout<<"Name -:"<<name<<endl;
        cout<<"Percentage -:"<<percentage<<endl;
    }
};

int main()
{
    student s;
    s.getdata(s);
    s.dispdata();
    
    return 0;
}