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
            int a,b;
            cin>>a>>b;

            /*
                10% of x = a
                x = a*100/10 = a*10;

                20% of x = b 
                x = b*100/20 = b*5;
            */

            int v1 = a*10;
            int v2 = b*5;

            if(v1==v2)
                {
                    cout<<"ANY"<<endl;
                    continue;
                }

            string ans = (v1>v2)?"FIRST":"SECOND";
            cout<<ans<<endl;

        }
    return 0;

}