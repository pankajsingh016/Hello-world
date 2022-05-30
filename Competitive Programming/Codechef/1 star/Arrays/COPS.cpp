#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long long int
#define vi vector<int>
#define vii vector<vector<int>>



void marker(int from,int to,vector<bool>&a)
{
    if(from < 0)
        from = 1;
    
    if(to > 100)
        to = 100;

    for(int i=from;i<=to;i++)
        a[i] = true;
}


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
            int m,x,y;
            cin>>m>>x>>y;

            vector<int>hno(m);
            for(int i=0;i<m;i++)
            {
                cin>>hno[i];
            }

            int range = x*y;
            vector<bool>mark(101,false);

            for(int i=0;i<m;i++)
            {
                int from = hno[i] - range-1;
                int to  = hno[i] + range-1;
                marker(from,to,mark);
            }
            int cnt = 0;
            for(int i=1;i<100;i++)
            {
                if(mark[i]==false)
                    cnt++;
            }

            cout<<cnt<<endl;

        }
    return 0;

}