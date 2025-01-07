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

    //inserting the size of array
    int n;
    cin>>n;

    int ar[n];

    //inserting array
    for(int i=0;i<n;i++)
        cin>>ar[i];
    
    //inserting k
    int k;
    cin>>k;
    cout<<k<<endl;
    //print the pair with the sum equal to the value k
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(ar[i]+ar[j]==k && i!=j)
            {
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
    
    return 0;

}