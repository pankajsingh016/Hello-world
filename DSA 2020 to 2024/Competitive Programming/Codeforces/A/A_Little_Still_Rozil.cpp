#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long long int
#define vi vector<int>
#define vii vector<vector<int>>


int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    #ifndef ONLINE_JUDGE
    freopen("/media/pankajsingh/workbench/Git/Hello-world/input.txt","r",stdin);
    freopen("/media/pankajsingh/workbench/Git/Hello-world/output.txt","w",stdout);

    #else
    // online submission
    #endif

    int n;
    cin>>n;

    vi arr;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }

    int min = INT_MAX;
    int countmin = 0;
    int pos = 0;

    for(int i=0;i<arr.size();i++)
    {
        if(min == arr[i])
        {
            countmin++;
        }

        if(min > arr[i])
        {
            min = arr[i];
            pos = i;
            countmin = 1;
        }

    }

    if(countmin==1)
    {
        cout<<(pos+1)<<endl;
    }
    else{
        cout<<"Still Rozdil"<<endl;
    }
    
    return 0;

}