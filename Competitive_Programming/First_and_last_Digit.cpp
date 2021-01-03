#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    int a,b,c;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        b = a%10;
       
        while(a>0)
        { 
            c=a%10;
            
            a=a/10;
        }     
        cout<<b+c;   
    }
    return 0;
}
