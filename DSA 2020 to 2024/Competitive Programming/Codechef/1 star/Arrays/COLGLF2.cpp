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
            int s;
            cin>>s;
            
            int ans = 0;

            vector<int>qi(s);
            for(int i=0;i<s;i++)
                cin>>qi[i];
            
            for(int i=0;i<s;i++)
            {
                int ep;
                cin>>ep;

                for(int j=0;j<ep;j++)
                {
                    int a;
                    cin>>a;

                    if(j==0){
                        ans = ans + a;
                    }
                    else
                    {
                        ans += (a-qi[i]);
                    }
                }
            }

            cout<<ans<<endl;
        }
    return 0;

}