// #include<iostream>
// using namespace std;
// class test
// {
     
//     public:
//     test(){cout<<"HI";}
// };
// int main()
// {
//     test t1;
//     return 0;
// }
#include<iostream>
using namespace std;
class X
{
    public:
        int x;

};

int main()
{
    X a;
    X b =a;
    cout<<a.x<<"  "<<b.x;
    return 0;
}