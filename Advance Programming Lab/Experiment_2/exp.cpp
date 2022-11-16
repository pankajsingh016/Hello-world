// Write a program to find the sum of an array using template
#include<bits/stdc++.h>

using namespace std;

template<typename T>
T sum(T a, T b)
{
    return (a+b);
}

//Template using vectors
template<typename T> 
T smallest(vector<T>ver)
{
    T min = ver[0];

    for(int i=0;i<ver.size();i++)
    {
        if(ver[i] < min)
        {
            min = ver[i];
        }
    }

    return min;
}

//Template using arrays
template<typename T>
T smallarray(T v[])
{
    T min = v[0];
    int size = sizeof(v)/sizeof(v[0]);

        for(int i=0;i<size;i++)
    {
        if(v[i] < min)
        {
            min = v[i];
        }
    }

    return min;

    
}

template<typename T> 
T ksmallestelement(T arr[],int k)
{
    set<T>s;
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++)
    {
        s.insert(arr[i]);
    }

    auto it = s.begin();

    for(int i=0;i<k;i++)
        it++;

    return *it;

}



int main()
{

    cout<<sum(4.5, 5.5)<<endl;
    cout<<sum(5, 6)<<endl;

    vector<float> f = {1.1,0.1,4.5,6.8};
    vector<int> i = {1,2,3,3,4,2,1,1,1,-1};

    float f1[] = {1.1,0.1,4.5,6.8};
    int i1[] = {1,2,3,3,4,2,1,1,1,-1};

    int arr[] = {11,1,1,1,1,232,2,2,2,1,1,2,32,1,2,3,1,1231,1,2,3,1,2,41,3,3,2,12,3,2,1,23,2,32};

    cout<<"Smallest Element in float : "<<smallarray(f1)<<endl;
    cout<<"Smallest Element in Integer :"<<smallarray(i1)<<endl;

    cout<<"The Kth Smallest Element : "<<ksmallestelement(arr,2)<<endl;
    return 0;
}