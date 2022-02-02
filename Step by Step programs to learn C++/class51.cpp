//Dynamic Memory Allocation
#include<iostream>
using namespace std;

int main()
{
    int *ptr= new int;  //new block of type int
    *ptr=10;
    if(ptr==NULL)
    {
        cout<<"No Memory";
        exit(1);
    }

    cout<<*ptr<<endl;
    cout<<sizeof(*ptr)<<endl;

    float *f = new float(2.8);
    cout<<*f<<endl;
    delete ptr;
    delete f;
    return 0;
}
/*
keyword
1.new to create the block of memory.
2.delete to deallocate the memory.
3. int *ptr = new int;
int *ptr= new int  // to integer block
float *ptr = new float //to float block
int *ptr = new int[6] //to the array base of 6 element

Home-Work to create array with the help of memory allocation
*/

