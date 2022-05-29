//Concept of Pass by Value
// Pass By Reference
// Pass By Pointer
#include <iostream>

using namespace std;

void passByVal(int);
void passByRef(int &);
void passByPtr(int *);

int main()
{
    int x = 5;
    cout << "Value of X is -:" << x;
    passByVal(x);
    cout << "\nValue of X is -:" << x;
    passByRef(x);
    cout << "\nValue of X is -:" << x;
    passByPtr(&x);
    cout << "\nValue of X is -:" << x;
    return 0;
}
void passByVal(int val) // Passing By value Example val = x
                        // passByVal(x) is treated like val = x
{
    val = 10;
    cout << "\nPass By Value-:" << val;
}
void passByRef(int &ref) // Compiler will internal treat
                         // ref as internal pointer.
{
    ref = 20;
    cout << "\nPass By Reference-:" << ref;
}
void passByPtr(int *ptr) // Passing the parameter as address and 
                         // Storing the same in the pointer.
{
    *ptr = 30;
    cout << "\nPass By Pointer-:" << *ptr;
}