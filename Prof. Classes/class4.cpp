//using static data types in the class
#include<iostream>
using namespace std;

class Sample
{
   static int count; //static is shared it does not belong to any particular class
   public:
   void show()
   {
       cout<<"count ="<<count<<endl;
       count ++;
   }
};

int Sample::count=0;

int main()
{
    Sample s;
    s.show();
    s.show();
    s.show();
    return 0;
}