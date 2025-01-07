// Copy Constructor 
#include<iostream>
using namespace std;

class Sample
{ 
    private:
    int x,y;
    public:
    Sample(Sample &s)  //copy constructor
    {
       x = s.x;
       y = s.y;
    }

    Sample()
    {
        x =10;
        y =20;
    }

    void getdata()
    {
        cout<<"Enter the Value-:";
        cin>>x>>y;
    }

    void show()
    {
        cout<<x<<" "<<y;
    }

};

int main()
{
    Sample s1;
    s1.getdata();
    Sample s2;
    s2=s1; // s2 = s1  s1 = s2 will not evoked the copy constructor.
    s2.show();
    return 0;
}