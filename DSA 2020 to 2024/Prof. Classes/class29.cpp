//Pointer in c++
//Variable capable of containing the address
//using reference * will create the pointer
#include<iostream>
using namespace std;

int main()
{
    int *ptr;
    float *fptr;
    char *cptr;
    int a = 0;
    ptr = &a;
    cout<<*ptr<<endl;
    cout<<a<<endl;
    cout<<ptr<<"\n"<<&a;
    return 0;
}