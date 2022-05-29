#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string str;
    ifstream fin;
    fin.open("input.txt");
    while(fin.eof()==0)
    {
        getline(fin,str);
        cout<<str<<endl;
    }
    /*
    fin.eof 
    eof means end of file it will return 1 after it reaches 
    the last character of the file
    */
   fin.close();
}

/*
 ch=fin.get() reading each character at a time 
*/