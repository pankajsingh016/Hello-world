#include<iostream>
using namespace std;
class Sample 
{
  int x,y,j;
  public:
  Sample(int i)
  {
      x=10;
      y=20;
      j=i;   
      cout<<"Constructor "<<i<<endl;   
  }
  ~Sample()
  {
      cout<<"Destructor is Called ";
      cout<<j<<endl;
  }
  void show()
  {
      cout<<"X ="<<x<<endl;
      cout<<"Y ="<<y<<endl;
  }
};
int main()
{
    Sample s1(1),s2(2);  
    return 0;
}