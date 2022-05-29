#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Total Pass Students -:"<<endl;
    cin>>n;

    char arr[n][10];
    char *check = new char[8];
    fflush(stdin);
    
    cout<<"Enter Check student -:";
    cin.getline(check,6);

    for(int i=0;i<n;i++)
    {
        cout<<"Enter Name-"<<endl;
        cin.getline(arr[i],10);
    }

    int m=0;

    for(int i=0;i<n;i++)
    {
         if (strcmp(arr[i],check)==0)
         {
             cout<<"The Student"<<check<<"has Passed the exam.";
             m=1;
             break;
         }
    }
    if(m==0)
    {
        cout<<"The Student"<<check<<"has not Passed the exam.";
    }
}