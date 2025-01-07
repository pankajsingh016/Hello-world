//Exception Handling
/*
use try and catch always
but throw can also be run with these
*Terminate function call when only throw is written
*
*/
#include<iostream>
#include<conio.h>
using namespace std;
void func()
{
    throw 10;
}
int main()
{
    int i=1;
    cout<<"Welcome";
    try{
        if(i==1)
            func();
        if(i==2)
            throw "Error";
        if(i==3)
            throw 3.5;
        cout<<"\nIn Try";
    }
    catch(int e){
        
        cout<<"\nException no:"<<e<<endl;
    }
    catch(double e)
    {
        cout<<"Double in Expression"<<e<<endl;
    }
    catch(int){
        cout<<"Catches No Value throw"<<endl;
    }
    catch(...)
    {
        cout<<"Error Generated"<<endl;
    }

    cout<<"\nLast Line";
    return 0;
}