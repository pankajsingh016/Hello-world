//File handling
#include<iostream>
#include<fstream> //file handling class
using namespace std;

int main()
{
    //writing into the file
    //method 1 using constructor
    ofstream fout("output.txt"); //object of class ofstream
   //method 2
    //fout.open("output.txt");   //using the open method
    /*
    using constructor of of stream we can also open the file.
    */
    try
    {
        if(fout.is_open())
                fout<<"Hellow Class B";
        else throw ("No such file found!");
    }
    catch(const char *str)
    {
        cout<<str<<endl;
    }
    
    fout<<"This is From Class57\n Let see it's demo"<<endl;
    cout<<"hello";
    fout.close();

    return 0;
}