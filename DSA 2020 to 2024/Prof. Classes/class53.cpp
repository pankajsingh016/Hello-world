//Dynamic Memory Location
//In the class
#include<iostream>
using namespace std;
class test
{
int *ptr;
int size;
public:
test(int a)
{
    size=a;
    ptr=new int[size];
}
void get()
{
    for(int i=0;i<size;i++)
    {
        cin>>ptr[i];
    }
    for(int i=0;i<size;i++)
        cout<<ptr[i];
}
~test()
{
    delete [] ptr;
}
};
int main()
{
    int a;
    cin>>a;
    test t(a);
    t.get();
    return 0;
}