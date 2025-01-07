#include<iostream>
using namespace std;

void fun()
{
    cout<<"Function";
}

int main()
{
    void (*ptr)(); //pointer to a function
    ptr = &fun;
    (*ptr)(); // calling the fun() using function pointer
    /*
    1. ptr is capable of storing the address of the function.
    2. ptr = &fun; and ptr = fun both are valid. 
    */
    return 0;
}