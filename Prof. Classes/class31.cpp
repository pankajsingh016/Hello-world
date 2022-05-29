//Pointer and types
#include<iostream>

using namespace std;
int* fun()
{
    static int x=5; // static solved the problem.
    return &x;
}
int main()
{
    int *ptr; //Wild pointer
    ptr = 0; //Making it as a null pointer
    int *ntr = NULL; //Null pointer
    //generic pointer
    int x =0;
    char ch = 'A';
    void *vtr;
    vtr =&x;
    cout<<*(int*)vtr;
    vtr = &ch;
    cout<<*(char *)vtr;  //type-casting the void function
//__________________________________________________________
    //function returing pointer.
    int *p=fun();
    cout<<*p;
    //Dangling pointer - pointing to a location which is no longer valid.

    return 0;
}