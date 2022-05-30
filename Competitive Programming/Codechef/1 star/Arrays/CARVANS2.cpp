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

            vi ar(n);
            for(int i=0;i<n;i++)
                cin>>ar[i];
            
            int cmax = 0;
            int mins = ar[0];
            for(int i=0;i<n;i++)
            {
                if(ar[i] <= mins)
                {
                    cmax += 1;
                }

                if(mins >= ar[i])
                    mins = ar[i];

            }

            cout<<cmax<<endl;

        }
    return 0;

}