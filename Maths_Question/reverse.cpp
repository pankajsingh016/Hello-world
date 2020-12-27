#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number\n";
    cin>>n;
    int temp = n;
    int rev =0;
    while(temp>0)
    {
          int k= temp%10;
          rev = rev*10+k;
          temp/=10;
    }
    cout<<"The Reversed Number is-:"<<rev;
    return 0;
}