//Example of multiple inheritance
#include<iostream>
using namespace std;
class vechile
{
  protected:
    int fuel;
    string brand;
    int capacity;
};

class four
{
    protected:
        string color;
};

class car : public vechile, public four
{
    public:
    void get()
    {
        cout<<"Enter the values for fuel, brand, capacity,color"<<endl;
        cin>>fuel>>brand>>capacity>>color;
    }   
    void show()
    {
        cout<<"Detail of the vehicles are-:"<<endl;
        cout<<fuel<<" "<<brand<<" "<<capacity<<" "<<color<<endl;
    }
};

int main()
{
    car c1;
    c1.get();
    c1.show();  
    return 0;
}