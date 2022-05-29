#include<iostream>
#include<conio.h>
using namespace std;

class zoo;
class Gar
{
    int x;
    int y;
    public:
    void getdata()
    {
        x = 10;
        y = 20;
    }
    // void dispdata()
    // {
    //     cout<<"X ="<<x<<endl;
    //     cout<<"Y ="<<y<<endl;
    //     cout<<"Z ="<<t.z<<endl;
    //     cout<<"M ="<<t.m<<endl;
    // }
    friend class zoo;
};

class zoo
{
    int z;
    int m;
    friend class Gar;
    public:
    void getdata()
    {
         z = 20;
         m = 50;
    }
    void dispdata(Gar b)
    {
         cout<<"Z ="<<z<<endl;
         cout<<"M ="<<m<<endl;
         cout<<"X ="<<b.x<<endl;
         cout<<"Y ="<<b.y<<endl;
    }
    
};

int main()
{
    Gar a;
    zoo b;
    a.getdata();
    b.getdata();
    b.dispdata(a);
    return 0;
}