#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int real,img;
    public:
    void get()
    {
        cin>>real>>img;
    }
    void show()
    {
        cout<<real<<" "<<img;
    }

    Complex add (Complex c2)
    {
        this->real = real + c2.real;   // hidden this to tell complier for objects
                                //this pointer is a comstant pointer.
        img = img + c2.img;
    }
};
int main()
{
    Complex c1,c2;
    c1.get();
    c2.get();
    c1.add(c2);
    c1.show();
    return 0;
}