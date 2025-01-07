#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout; // write to the file
    fout.open("output.txt",ios::out|ios::ate);
    fout<<"Hellow st"<<endl;
    fout.close();
    return 0;
}

/*
* ios::out will remove the previous content. 
* ios::app will append add someting to the previous string.
* ios::ate will update the file with new value.
* tellg is in istream class
* seekg(position) will place your cursor in the right position
* seekg(position, ios_base::beg)  --> read from the begning.
* seekg(position, ios_base::cur)  --> move from the current position. -ve means towards left and +ve means right direction
* seekg(positon, iost_base::end) --> start forms the end kindly use position in negative
*/
