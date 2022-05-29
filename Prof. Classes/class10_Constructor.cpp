#include<iostream>
using namespace std;
class Sample
{
    int x,y;
    public:
    //constructor overloading is possible in constructor
  //if we don't provide a constructor the compiler wil
  // assign the value by itself
  //constructor can take parameters too.(Constructor with no paramenter is called default constructor)
   //Sample(int a) // As soon as you create the object 
             // Constructor got evoked 
             //constructor will return nothing.
   
   Sample(Sample &a) // copy constructor
    {
        x=a.x;
        y=a.y;
    }
    Sample()   //defaulat constructor 
    {
        x=1;
        y=0;
    }

    
    void show()
    {
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
    //Sample s1(10)//for s2 also we have to pass the parameter
  // Sample s2(s1);
  Sample s1;
  Sample s2(s1);
    s1.show();    
    s2.show();
    return 0;
}

//three type of constructor
/*
   1.Paramaterized constructor
   2.Default constructor
   3.Copy Constructor
   4.Dummy Constructor
*/