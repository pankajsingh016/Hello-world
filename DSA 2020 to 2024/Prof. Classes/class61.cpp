#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("output.txt");
    cout<<fin.tellg()<<endl;//0 tells the positon of teh get pointer
    cout<<(char)fin.get()<<endl;
    cout<<fin.tellg()<<endl; //1 tells position
    cout<<(char)fin.get()<<endl;
    
    fin.seekg(7);  // move the cursor to the desired location
    cout<<(char)fin.get()<<endl;

    fin.seekg(2,ios_base::beg);
    cout<<(char)fin.get()<<endl;

    fin.close();
    
    return 0;
}