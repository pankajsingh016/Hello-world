//friend class 
// we can access the private data members of the 
// Another class
#include<iostream>
using namespace std;

class test2;

class test1
{
    int x;
    public:
    
    void show(test2 &t2);
    void show()
    {
        cout<<"Value of x -:"<<x<<endl;
      //  cout<<"Value of y in test1"<<t2.y;
    }
    
    friend class test2;
    
};

class test2
{
    int y;
    public:
    // void get(test1 &t1) //Passing the object as the reference
    void get(test1 *t1) // test *t=&t1 int *a
    {
       t1->x=20;    //-> arrow operator used to access the x form the t1 
       y=10;
    }
    void show()
    {
        cout<<"Value of y is =:"<<y<<endl;
    }
    friend class test1;
};

int main()
{
    test2 t2;
    test1 t1;
    
    //t2.get(t1); //calling simply by refernce
    t2.get(&t1); //calling by poiners.
    t1.show();
    t2.show();
}