#include<iostream>
#include<iomanip>
using namespace std;
// use of steprecision , stew, setfill ;
int main()
{
    float a = 2.456783;
    cout<<fixed<<setprecision(2)<<a<<endl;
    string str = "Hellow-Computer";
    cout<<setfill('p')<<setw(20)<<str;
    return 0;
}