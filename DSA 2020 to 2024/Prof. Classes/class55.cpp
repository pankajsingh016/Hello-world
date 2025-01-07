//Exception handing
/*
try block 
identidy the exception code and put into the try block

try and catch should work  with each other they are in pair

*/
#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    cin>>num1>>num2;

    try
    {
        if(num2>0)
        {
            cout<<num1/num2;
        }

        else if(num2<0)
        {
            throw "Negative";
        }

        else
            throw num2;
    }

    catch(int num2)
    {
        cout<<"Infinity"<<endl;
    }

    catch(const char *a)  // catching the string
    {
        cout<<a<<endl;
    }

    catch(...)  // catch all block
    {
        cout<<"Something went wrong here";
    }

}