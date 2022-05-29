#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream out;
    out.open("output.txt",ios::ate);
    cout<<out.tellp()<<endl;
    out<<"Hello Students";
    cout<<out.tellp()<<endl;
    out<<"to CPP";
    cout<<out.tellp()<<endl;

    out.seekp(7);
    out<<"zz";
    return 0;
}