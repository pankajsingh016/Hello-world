#include<iostream>
#include<cstring>
using namespace std;

class media
{
    protected:
        int n;
        string name;
    public:
       virtual void record()
       {
           
       }

};
class books :public media
{

};

class tape :public media
{

};

int main()
{
    return 0;
}