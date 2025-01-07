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
    freopen("/media/pankajsingh/workbench/C,C++/The Dead Promise/input.txt","r",stdin);
    freopen("/media/pankajsingh/workbench/C,C++/The Dead Promise/output.txt","w",stdout);

    #else
    // online submission
    #endif


    int t;
    cin>>t;
    while(t--)
        {
            int n;
            cin>>n;
            vi freq(101);

            for(int i=0;i<n;i++)
            {
                int x;
                cin>>x;
                freq[x]++;
            }

            int ans = 0;
            int cur = 0;
            for(int i=0;i<101;i++)
            {
                if(freq[i]!=0)
                {
                    cur = cur + freq[i];
                    if(cur > (n-cur))
                    {
                        ans += freq[i];
                    }
                }
            }
            cout<<ans<<endl;
        }
    return 0;

}