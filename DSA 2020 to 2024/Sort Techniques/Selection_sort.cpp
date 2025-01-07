//This program is for showing selection sort
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Length of the Array\n";
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the Element--->";
        cin>>ar[i];
    }
    cout<<"How swaping takes place in every step-:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(ar[i]<ar[j])
            {
                int temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
            cout<<ar[j];
        }
        cout<<"\n\n";
    }
    return 0;
}