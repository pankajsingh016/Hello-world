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
            int n,m;
            cin>>n>>m;
            int freq[m]={0};
            for(int i=0;i<n;i++)
            {
                    int x;
                    cin>>x;
                    freq[x-1]++;
            }
            bool done = false;

            for(int i=0;i<m;i++)
            {
                    if(freq[i]==0)
                    {
                        cout<<"Yes"<<endl;
                        done = true;
                        break;
                    }

            }

                if(!done)
                {
                    cout<<"No"<<endl;
                }
        }
    return 0;

}