#include<iostream>
using namespace std;
int main()
{
    int *ptr=new int[10];  //Allocating the dynamic memory and accessing it through pointer
    if(ptr==NULL)
        exit(0);
    for(int i=0;i<10;i++)
    {
        cout<<"Value ?"<<endl;
        cin>>ptr[i];

    }
    for(int i=0;i<10;i++)
    {
        cout<<i<<"->"<<ptr[i]<<endl;

    }

    delete[] ptr;
    return 0;
}