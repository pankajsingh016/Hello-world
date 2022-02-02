//method overriding
#include<iostream>
using namespace std;
class A
{
    public:
  virtual void show()  // Binding will happen late and compiler 
                       // will do the binding at the run time.
{
      cout<<"base class"<<endl;
}
};
class B : public A
{
  public:
  void show()
  {
        cout<<"derived class"<<endl;
  }
};
int main()
{

  B b1,*bptr;
  b1.show();   //class B
  bptr=&b1;
  bptr->show();    //class B
  A a1, *aptr;
  a1.show();  //class A
  aptr=&a1;
  aptr->show();    //class A
  aptr=&b1;
  aptr->show();  //class B

}