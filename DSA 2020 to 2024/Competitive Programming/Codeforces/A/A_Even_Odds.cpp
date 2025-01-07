#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long long ll
#define vi vector<ll>
#define vii vector<vector<ll>>


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

    ll n,k;
    cin>>n>>k;

    ll nodds = (n+1)/2;
    ll neven = n - nodds;


    if(k <= nodds)
    {
        cout<<(1)+(k-1)*2;
    }
    else{
        cout<<(2)+((k-nodds)-1)*2;
    }

    return 0;

}