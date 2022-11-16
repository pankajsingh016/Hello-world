#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream emprecord;
    emprecord.open("xyz.txt",ios::app|ios::out);


    int r;
    string s;

    int n;
    cout<<"Enter Total Number of Employees to add : ";
    cin>>n;


    fflush(stdin);

    while(n--)
    {
        cout<<"Enter Employee ID : ";
        cin>>r;

        fflush(stdin);
        cout<<"Enter Employee Name : ";
        cin>>s;

        emprecord<<r<<" "<<s<<" "<<endl;
    }

    emprecord.close();

    ifstream reademployee;
    reademployee.open("xyz.txt",ios::in);

    cout<<"\n\nRecord stored in file :"<<endl;

    string read;
    while(getline(reademployee, read))
    {
        cout<<read<<endl;
    }

    reademployee.close();
    return 0;
}