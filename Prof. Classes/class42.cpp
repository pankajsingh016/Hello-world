#include<iostream>
#include<cstring>
using namespace std;
class String
{
    char str[20];
    public:
    String()   // Default Constructor
    {
        cin.getline(str,20);
    }

    String(const char *str)   //Pasing paramatrized constructor
    {
        strcpy(this->str,str);
    }

    String(String &a)  //copy constructor
    {
        strcpy(str,a.str);
    }

    void operator +(String a) //operator overloading of +
    {
        strcat(str, a.str);
    }

    void operator =(String a)  //operator overloading of =
    {
        strcpy(str,a.str);
    }

    void operator ==(String a) //operator overloading of ==
    {
        if(!strcmp(str,a.str))
        {
            cout<<"Both String are Equal"<<endl;
        }

        else
        {
            cout<<"Not Equal"<<endl;
        }
    }

    void operator >(String a)  //operator overloading of >
    {
        if(strcmp(str,a.str)>0)
        {
            cout<<str<<"is greater than"<<a.str;
        }
        else
        {
            cout<<str<<"is smaller than"<<a.str;
        }
    }

    void show()
    {
        cout<<str<<endl;
    }
};

int main()
{
    String s;
    String b;
 //   s + b;  //calling + overloaded operator;
   // s.show();
    s>b;
    return 0;
}