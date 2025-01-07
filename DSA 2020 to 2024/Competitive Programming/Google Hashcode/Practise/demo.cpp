#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a Element ->";
    cin>>a;
    cout<<"The Element you have Entered is "<<a<<endl;

    if(a%2==0){
        cout<<"The Element is Even"<<endl;
    }
    else{
        cout<<"The Element is Odd"<<endl;
    }
    return 0;
}
