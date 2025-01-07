#include <iostream>
using namespace std;
class Complex 
{
  int real,img;
  public:
  void get()
  {
    cin>>real>>img;
  }
  void display()
  {
    cout<<real<<img;
  }
  void add(Complex c2)
  {
    real=real+c2.real;
    img=img+c2.img;
  }
  friend void operator-(Complex c1,Complex c2);
};
void operator -(Complex c1,Complex c2)
  {
    c1.real=c1.real-c2.real;
    c1.img=c1.img-c2.img;
  }

int main() {

	Complex c1,c2;
	c1.get();
	c2.get();
	c1.add(c2);  //add(c1,c2);
	c1.display();
	cout<<endl;
	c1-c2;
	c1.display();
}