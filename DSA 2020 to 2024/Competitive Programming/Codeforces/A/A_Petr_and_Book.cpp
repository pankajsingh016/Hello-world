#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long long int
#define vi vector<int>
#define vii vector<vector<int>>


int main()
{

    // ios::sync_with_stdio(0);
    // cin.tie(0);
    // #ifndef ONLINE_JUDGE
    // freopen("/media/pankajsingh/workbench/Git/Hello-world/Competitive Programming/input.txt","r",stdin);
    // freopen("/media/pankajsingh/workbench/Git/Hello-world/Competitive Programming/output.txt","w",stdout);

    // #else
    // // online submission
    // #endif

    int t;
    cin>>t;
    int arr[7];

    int days = 0;
    
    for(int i=0; i<7; i++)
    {
        cin>>arr[i];
    }

    int i=0;
    while(t>0)
    {
        t -= arr[i%7];
        days = (i+1)%7;
        i += 1;
    }
    if(days==0)
        days = 7;

    cout<<days<<endl;

    return 0;

}