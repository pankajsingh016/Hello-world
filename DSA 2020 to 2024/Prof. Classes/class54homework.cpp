//Making a dynamic 2D array
//using int **arr i 1st have maken the array of pointers then I have assign each of them a new memory space in the
//memory
#include<iostream>
using namespace std;

int main()
{
    int **arr = new int*[4];

    for(int i=0;i<4;i++)
    {
        arr[i]=new int[3];
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"Enter Data-:"<<"["<<i<<"]["<<j<<"]";
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        
        }
        delete arr[i];
        cout<<endl;
    }

    delete [] arr;
    return 0;
}