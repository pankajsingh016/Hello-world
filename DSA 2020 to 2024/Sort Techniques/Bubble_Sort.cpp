#include<iostream>

using namespace std;
int main()
{
    int n=10;
    cout<<"Enter Length of array";
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
       cout<<"Enter Element["<<i<<"]-:";
       cin>>ar[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(ar[j]>ar[j+1])
            {
                int temp= ar[j+1];
                ar[j+1]=ar[j];
                ar[j]=temp;
            }
        }
    }
    cout<<"\n";
    for(int i=0;i<n;i++)
    {
       cout<<ar[i]<<" ";
    }

    return 0;
}