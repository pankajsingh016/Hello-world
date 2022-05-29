//Example of multilevel inheritance
#include<iostream>
using namespace std;
class vechile
{
   public:
    int fuel;
    string brand;
    int capacity;
};

class four:public vechile
{
    protected:
        string color;
};

class car : public four
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
    cout<<c1.capacity;
    c1.show();  
    return 0;
}