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
    freopen("/media/pankajsingh/workbench/Git/Hello-world/Competitive Programming/input.txt","r",stdin);
    freopen("/media/pankajsingh/workbench/Git/Hello-world/Competitive Programming/output.txt","w",stdout);

    #else
    // online submission
    #endif


    int t;
    cin>>t;
    while(t--)
        {
            
            int n,x;
            cin>>n>>x;

            int div = (n/6) + ((n%6>0)?1:0);

            cout<<x*div<<endl;

        }
    return 0;

}