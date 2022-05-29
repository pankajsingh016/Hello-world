#include<iostream>
using namespace std;
void area(int &,int &);
int main()
{
    int l,b;
    cout<<"Enter L and B -:\n";
    cin>>l>>b;
    cout<<l<<" "<<b;
    area(l,b);
    cout<<"\n"<<l<<" "<<b;

}
void area(int &a,int &b)
{
    a=20;
}