#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    string str;
    ifstream fin;
    fin.open("input.txt");
    getline(fin,str);//takes the whole line
    cout<<str; 
    fin>>str;//can't able to take after space
    return 0;
}