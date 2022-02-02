#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    string s;
    getline(cin,s);
    for(int i=0;s[i]!='\0';i++)
    {
        if(i==0)
        {
            int j=i;
            while(s[j]!=' ')
            {    cout<<s[j];
                 j++;
            }
            cout<<endl;
        }

        else if(s[i]==' ')
        {
            int j=i+1;
            while(s[j]!=' ')
            {
                cout<<s[j];
                j++;
            }
            cout<<endl;
        }
    }
    
}