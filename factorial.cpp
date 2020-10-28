#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    double n;
    double fact=1;
    cout<<"Enter a Number to find Factorial of-:\n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        fact = fact*i;
    }    
    cout<<"Factorial of Number is -:\n";
    cout<<fact;
    return 0;
}