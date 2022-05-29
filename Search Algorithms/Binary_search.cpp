#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f;
    int s=0;
    cout<<"Enter Element in Array\n";
    cin>>n;
    cout<<"Enter Element to search for\n";
    cin>>f;
    int ar[n];
    int e=n-1;
    int mid = (s+e)/2;
    cout<<"Enter Element of Array\n";
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    while(s<e)
    {
        if(ar[mid]==f)
        {
            cout<<"Found at-:"<<mid;
            break;
        }
        else if(ar[mid]<f)
        {
            s=mid+1;
            mid = (s+e)/2;
        }
        else if(ar[mid]>f)
        {
            s=mid-1;
            mid=(s+e)/2;
        }
    }

    if(s>e)
    {
         cout<<"Not Present\n";
    }
     
}