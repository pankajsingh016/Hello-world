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

    ll n;
    cin>>n;

    ll a0 = 0;
    ll a1 = 1;
    ll b0=0, b1=0;
    ll temp =0;
    for(;temp!=n;)
    {
        temp = a0 + a1;
        b0 = a0;
        b1 = a1;
        // cout<<temp<<endl;
        a0 = a1;
        a1 = temp;
    }

    temp =0;
    a0 = 0;
    a1 = 1;
    ll c0=0,c1=0;
    for(;temp!=b0;)
    {
        temp = a0 + a1;
        c0 = a0;
        c1 = a1;
        //----------
        a0 = a1;
        a1 = temp;
    }
    
    cout<<c0<<" "<<c1<<" "<<b1<<endl;
             
    return 0;

}