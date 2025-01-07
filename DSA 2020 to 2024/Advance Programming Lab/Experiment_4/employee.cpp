#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    system("color f1");
    char arr[100];
    cout<<"Enter your Roll no and Name"<<endl;
    //cin>>arr;
    cin.getline(arr, 100);
    ofstream myfile;
    myfile.open("xyz.txt", ios::app);
    
    // fstream myfile("xyz.txt", ios::out|ios::app);
    
    myfile<<arr<<endl;
    myfile.close();
    cout<<"file write successfully"<<endl;
    
    char arry[100];
    ifstream obj("xyz.txt",ios::app);
    cout<<"Enter New Line :"<<endl;
    obj.getline(arry, 100);
    cout<<"file data \n"<<arry;
    cout<<"\n\n file read operation done\n"<<endl;
    obj.close();
    return 0;
}