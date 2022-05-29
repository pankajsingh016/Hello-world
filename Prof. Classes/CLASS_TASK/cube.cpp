#include<iostream>
using namespace std;

    void cube(int n)
    {
        cout<<"Cube of the Number is -:"<<n*n*n<<endl;
    }
    void cube(float n)
    {
        cout<<"Cube of the Number is -:"<<n*n*n<<endl;
    }

int main()
{
    int n;
    cout<<"Enter a Number-:";
    cin>>n;
    cube(n);
    float y;
    cout<<"Enter a Number-:";
    cin>>y;
    cube(y);

    return 0;
}